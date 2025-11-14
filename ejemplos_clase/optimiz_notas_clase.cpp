//This program is from Roberto. 



#include <iostream>

using namespace std;

#include <stdlib.h>     /* srand, rand */

#include <time.h>       /* time */
 
const int notas = 100;

const int grupo = 10;
 
int main(){
 
int num;

float compro;

srand(time(NULL));
 
compro = 0.0;

for(int j = 1; j <= grupo; j++){

  for(int i = 1; i <= notas; i++){
 
   num = rand() % 100 + 1;
 
   if(num >= 90){compro++; /*cout<<"Excelente"<<endl;*/} //compro = compro + 1;

   else if(num >= 80){compro+=2; /*cout<<"Muy bueno"<<endl;*/} //compro = compro + 2;

   else if(num >= 70){compro+=3; /*cout<<"Bueno"<<endl;*/}

   else if(num >= 60){compro+=4; /* cout<<"Suficiente"<<endl;*/}

   else{compro+=5; /* cout<<"Suspenso"<<endl;*/}

//   if(num < 60){compro++; /*cout<<"Suspenso"<<endl;*/}

//   else if(num < 70){compro+=2; /* cout<<"Suficiente"<<endl;*/}

//   else if(num < 80){compro+=3; /* cout<<"Bueno"<<endl;*/}

//   else if(num < 90){compro+=4; /* cout<<"Muy bueno"<<endl;*/}

//   else{compro+=5; /* cout<<"Excelente"<<endl;*/}
 
  } // FOR notas

} // FOR grupos
 
cout<<"numero de comprobaciones "<<compro/grupo<<endl;

return 0;

}
 