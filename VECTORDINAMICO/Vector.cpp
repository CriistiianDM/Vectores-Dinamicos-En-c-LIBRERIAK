#include <iostream>
#include "Vector.h"


using namespace std;
//Declaracion de variables publicas
//Proposito ahorrarse la vida pasando parametros.
 int *vector;
 int sizeArray;

/*-----------------------------------------------------------------------------------------*/

// Cuerpo de la funcion opcionesDelVector.
// La Funcion opcinesDelVector tiene 5 opcines a realizar por defecto para el Usuario
 void opcionesDelVector () {
   int opcion = 0;
   cout<<"\n\n";
   cout<<"\t\t * -- *         Bienvenido a la liberiaK          * -- * "<<endl;
   cout<<"\t\t * -- *  |1| sumar todos los elementos del Vector * -- * "<<endl;
   cout<<"\t\t * -- *  |2| Restar todos los elemtos del  Vector * -- * "<<endl;
   cout<<"\t\t * -- *  |3| Ordenar Vector A-Z                   * -- * "<<endl;
   cout<<"\t\t * -- *  |4| Mostrar Vector                       * -- * "<<endl;
   cout<<"\t\t * -- *  |5| EXIIT                                * -- * "<<endl;
   cout<<"\t\t Digite opcion: "; cin>>opcion;


   while (opcion > 5) {
      
      cout<<"\t\t Porfavor Inserte Una Opciona Valida: ";
      cin>>opcion;
   }

   switch (opcion) {

     case 1:
     suma_Vector();
     break;
     case 2:
     resta_Vector();
     break;
     case 3:
     ordenar_Vector();
     break;
     case 4:
     show_Vector();
     break;
   }


 }
/*-----------------------------------------------------------------------------------------*/
//Cuerpo de la funcion sumar vector
 void  suma_Vector() {
 
   int suma = 0;
  
     for (int i = 0 ; i < sizeArray ; i++) {
        suma += * (vector + i) ;
     }

     cout<<"\t\tLa suma de todos los elementos del vector es de: "<<suma<<endl;

 }
/*-----------------------------------------------------------------------------------------*/
//Cuerpo de la funcion resta del vector
 void resta_Vector() {

   int resta  = 0;

     for (int i = 0 ; i < sizeArray ; i++) {

       resta -= * (vector + i);
       
     }


     cout<<"\t\tLa resta de todos los elementos del vector es de: "<<resta<<endl;

 }




/*-----------------------------------------------------------------------------------------*/
//Cuerpo de la funcion ordenar vector
  void ordenar_Vector () {

     int aux = 0;
     int num;

     cout<<"\n\n";
     cout<<"\t\t * -- *        Ordenar vector    * -- * "<<endl;
     cout<<"\t\t * -- *   |1| De menor a mayor   * -- * "<<endl;
     cout<<"\t\t * -- *   |2| De mayor a menor  * -- * "<<endl;
     cout<<"\t\t * -- *   |3| EXIT               * -- * "<<endl;
     cout<<"\t\t Digite una opcion: "; cin>>num;


      while (num > 3) {
      
      cout<<"\t\t Porfavor Inserte Una Opciona Valida: ";
      cin>>num;
   }


     switch (num) {

       case 1:

       for (int i = 0 ; i < sizeArray ; i++) {

         for (int j = 0 ; j < sizeArray ; j++) {

           if ( * (vector + j) > * (vector + (j + 1))) {

              aux = * (vector + j);
             * (vector + j) = * ( vector +(j +1));
             * (vector +  (j +1)) = aux;

        }
       }
     }

       break;

       case 2:

       for (int x = 0 ; x < sizeArray ; x++) {

         for (int y = 0 ; y < (sizeArray-1) ; y++) {

            if ( * (vector + y) < * (vector + (y + 1))) {

               aux = * (vector + (y + 1));
               * (vector + (y + 1) ) = * ( vector + y );
               * (vector + y) = aux;

           }

         }
     }

     break;
     }


     
  }




/*-----------------------------------------------------------------------------------------*/



// Cuerpo de funcion principal 
// esta funcion me crea un arreglo dinamico

 void fill_Vector () {
   
    
   cout<<"\t\t Inserte el tamano del vector: ";
   cin>>sizeArray;

   vector =  new int[sizeArray];

   for (int i = 0 ; i < sizeArray ; i++) {

      cout<<"\t\tInserte el numero a guardar "<<"["<<i<<"]"<<" : ";
      cin>>*(vector + i);
   }

   opcionesDelVector();

 }
 

/*-----------------------------------------------------------------------------------------*/
//Cuerpo de la funcion mostrar vector

  void show_Vector() {

    cout<<"\n\n";

    cout<<"\t\t[";

    for (int i = 0 ; i < sizeArray ; i++) {

      if (i == (sizeArray - 1)) {
       cout<< * (vector + i) <<"]";
      }
      else {
       cout<< * (vector + i) <<" , ";

      }

    }
    
     cout<<"\n\n";
  }


/*-----------------------------------------------------------------------------------------*/
 // Cuerpo de la funcion que copia vectores en otros
  void create_Other_Vector (int &size ,  int * dir_vector) {

    for (int i = 0 ; i < sizeArray ; i++) {
       * (dir_vector + i) = * (vector+ i);
    }
    
    size =  sizeArray;
  }


/*-----------------------------------------------------------------------------------------*/
// Cuerpo de la funcion que muestra los nuevos vectores
 void show_create_vector(int * dir_vector) {
 
    cout<<"\n\n";

    cout<<"\t\t[";

    for (int i = 0 ; i < sizeArray ; i++) {

      if (i == (sizeArray - 1)) {
       cout<< * (dir_vector + i) <<"]";
      }
      else {
       cout<< * (dir_vector + i) <<" , ";

      }

    }
    
     cout<<"\n\n";
 }
/*-----------------------------------------------------------------------------------------*/
