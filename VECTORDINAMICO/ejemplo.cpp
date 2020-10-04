#include <iostream>
#include <stdlib.h>
#include "Vector.cpp"

using namespace std;


int main () {

   fill_Vector();
   //show_Vector();
   //como se accede a los vectores desde el main ? 
   // Sencillo se llama el * (vector), que es lo equivalente a un arreglo normal
   // ejemplo vector[0] = *( vector)
   //El vector principal se llama * vector  y la que guarda el tamano del arreglo es sizeArray
   // se define el tamano del vector asi: sizeArray = 5;
   // para aceder a las posiciones se hace de la siguiente forma
   // * (vector) = 15;  
   // * (vector+1) = 20;
   // * (vector+2) = 50;
   // * (vector+3) = 45;
   // * (vector+4) = 75;
  

  system("pause");
  return 0;
}

