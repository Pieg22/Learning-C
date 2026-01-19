/*1. Realiza una función que permita editar los datos de un alumno que ya se
encuentra en el vector. ( Es decir en la memoria )

2. Realiza una función que guarde los datos de los alumnos en un fichero de texto.
Para cada alumno, se debe guardar el nombre, el DNI y la nota media. (creando un fichero nuevo "falumnos.txt")

3. Realiza una función que cargue los datos de los alumnos de un fichero de texto.
La estructura del fichero debe ser la misma que la utilizada en la función pedida
en el punto 2. (acceder al fichero "falumnos.txt")
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int TAM_MAX = 50; 

struct Alumno{
    size_t string_size;
    string nombre;
    int dni;
    float media;
};

typedef Alumno Alumnos[TAM_MAX];
void introducirAlumno(Alumnos, int &);
void guardarAlumnos(Alumnos, int);
int cargarAlumnos(Alumnos);
void mostrarAlumnos(Alumnos, int);

int main ()
{
    Alumnos alumnos;
    int opcion;
    int tam = 0;
    do{
        cout << "Programa gestion alumnos" << endl;
        cout << "1: Introducir nuevo alumno" << endl;
        cout << "2: Editar alumno" << endl;
        cout << "3: Mostrar alumnos" << endl;
        cout << "4: Guardar datos (fichero texto)" << endl;
        cout << "5: Guardar datos (fichero binario)" << endl;
        cout << "6: Cargar datos (fichero texto)" << endl;
        cout << "7: Cargar datos (fichero binario)" << endl;
        cout << "8: Mostrar alumno con mejor expediente" << endl;
        cout << "9: Obtener media de expedientes de los alumnos" << endl;
        cout << "0: Salir" << endl;
        cout << "\n Introduce opcion: ";
        cin >> opcion;
        switch(opcion){
            case 1: 
                introducirAlumno(alumnos, tam);
                break;
            case 3:
                mostrarAlumnos(alumnos, tam);
                break;
            case 5: 
                guardarAlumnos(alumnos, tam);
                break;
            case 7: 
                tam = cargarAlumnos(alumnos);
                break;
        }
    } while(opcion > 0);
}

void introducirAlumno(Alumnos alumnos, int & tam)
{
    Alumno alumno;

    cout << "Introduce nombre: ";
    cin >> alumno.nombre;
    alumno.string_size = alumno.nombre.size();
    cout << "Introduce dni: ";
    cin >> alumno.dni;
    cout << "Introduce media de expediente: ";
    cin >> alumno.media;

    alumnos[tam] = alumno;
    tam++;
}

void guardarAlumnos(Alumnos alumnos, int tam){
    ofstream f;

    f.open("salida.dat", ios::binary);

    if(!f.fail())
    {
        for(int i = 0; i < tam; i++)
        {
            f.write((char *) (& alumnos[i].string_size), sizeof(size_t));
            f.write((char *) (& alumnos[i].nombre[0]), alumnos[i].string_size);
            f.write((char *) (& alumnos[i].dni), sizeof(int));
            f.write((char *) (& alumnos[i].media), sizeof(float));
        }
        f.close();
    }  
    else
        cerr << "Error abriendo el fichero" << endl; 
}

int cargarAlumnos(Alumnos alumnos) 
{
    ifstream f;
    int tam = 0;
    Alumno aux;

    f.open("salida.dat", ios::binary);
    if(!f.fail())
    {
        while(f.read((char *) (& aux.string_size), sizeof(size_t)))
        {
            aux.nombre.resize(aux.string_size);
            f.read((char *) (& aux.nombre[0]), aux.string_size);
            f.read((char *) (& aux.dni), sizeof(int));
            f.read((char *) (& aux.media), sizeof(float));
            alumnos[tam] = aux;
            tam++;
        }
    }  
    else
        cerr << "Error abriendo el fichero" << endl; 

    return tam;

}

void mostrarAlumnos(Alumnos alumnos, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "DNI: " << alumnos[i].dni << endl;
        cout << "Expediente: " << alumnos[i].media << endl;
    }
}