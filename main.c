#include <stdio.h>
#include <stdlib.h>

void llenar_tablero (char tablero[3][3]); //se llama a la funcion.
int main()
{
     char tablero [3][3]; //tablero.
     llenar_tablero(tablero);//dibuja tablero.
     return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void llenar_tablero (char tablero[3][3])
{
  int a, b;//variables que solo sirven para llenar los for a continuacion.
  for(a=0;a<3;a++)//este for sirve para poder leer todos los valores numericos (que puse en la funcion anterior)de las filas de la matriz.
  {
      for(b=0;b<3;b++)//este for sirve para poder leer todos los valores numericos (que puse en la funcion anterior)de las columnas de la matriz.
      {
          if(b < 2)//si el valor de la columna es menor a dos.
          {
              printf(" %c |",tablero [a][b]);//se imprime una linea vertical de por medio tanto para las filas como para las columnas.
          }
          else
          {
              printf(" %c  ",tablero [a][b]);
          }
      }
      if(a < 2)
      {
          printf("\n----------\n");//se imprime una linea horizontal para separar las filas.
      }
  }
  printf("\n"); //este printf representa un espacio para separar el tablero de el return 0.
  printf("\n"); //este printf representa un espacio para separar el tablero de el return 0.
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
