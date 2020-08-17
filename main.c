#include <stdio.h>
#include <stdlib.h>

void llenar_tablero (char tablero[3][3]); //se llama a la funcion.
void introduccion_numeros (char tablero[3][3]);
int main()
{
     char tablero [3][3]; //tablero.
     introduccion_numeros(tablero);
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
void introduccion_numeros (char tablero[3][3])//esta funcion lo que hace es llenar el tablero con valores numericos.
{
  int i, j;//variables que solo sirven para llenar los for a continuacion.
  char aux='1';//esta variable denominada auxiliar ayuda para que la matriz tome valores numericos a partir del 1."
  for(i=0;i<3;i++)//este for sirve para poder llenar las filas de la matriz.
  {
      for(j=0;j<3;j++)//este for sirve para poder llenar las columnas de la matriz.
      {
        tablero[i][j]=aux++;//lo que aca pasa es que el tablero va a empezar con el valor numerico 1 hasta llegar a 9 debido a que se le va sumando de a 1 a la variable auxiliar.
      }
  }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
