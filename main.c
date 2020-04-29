#include <stdio.h>
#include <stdlib.h>

void introduccion_numeros (char tablero[9]); //se llama a la funcion.
void llenar_tablero (char tablero[9]); //se llama a la funcion.

int main()
{
     char tablero[9]; //este vector vendria siendo nuestro tablero.
     introduccion_numeros(tablero);
     llenar_tablero(tablero);
     return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void introduccion_numeros (char tablero[9])//esta funcion lo que hace es llenar el tablero con valores numericos para despues poder escoger en que lugar de dicho tablero poner nuestra ficha.
{
  int i;//variable que solo sirve para llenar el for a continuacion.
  char aux='1';//esta variable denominada auxiliar ayuda para que el vector tome valores numericos a partir del 1.

  for(i=0;i<9;i++)//este for sirve para poder llenar todo el vector.
  {
   tablero[i]=aux++;//lo que aca pasa es que el tablero va a empezar con el valor numerico 1 hasta llegar a 9 debido a que se le va sumando de a 1 a la variable auxiliar.
  }

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void llenar_tablero (char tablero[9])//esta funcion se va a encargar de llenar y dibujar el tablero.
{
        printf("\-----    \n");      //todos estos printf sirven para dibujar el tablero en donde cada %c representa un lugar del vector.
        printf("\%c %c %c \n",tablero[0], tablero[1], tablero[2]);
        printf("\-----    \n");
        printf("\%c %c %c \n",tablero[3], tablero[4], tablero[5]);
        printf("\-----    \n");
        printf("\%c %c %c \n",tablero[6], tablero[7], tablero[8]);
        printf("\-----    \n");
  printf("\n"); //este printf representa un espacio para separar el tablero de el return 0.
  printf("\n"); //este printf representa un espacio para separar el tablero de el return 0.
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
