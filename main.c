#include <stdio.h>
#include <stdlib.h>

void introducir_numeros_en_el_tablero (char tablero[9]); //se llama a la funcion.
void dibujar_tablero (char tablero[9]); //se llama a la funcion.
void ingresar_fichas(char tablero[9]); //se llama a la funcion.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
     char tablero[9]; //este vector vendria siendo nuestro tablero.
     introducir_numeros_en_el_tablero(tablero);
     dibujar_tablero(tablero);
     ingresar_fichas(tablero);

     return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void introducir_numeros_en_el_tablero (char tablero[9])//esta funcion lo que hace es llenar el tablero con valores numericos para despues poder escoger en que lugar de dicho tablero poner nuestra ficha.
{
  int i;//variable que solo sirve para llenar el for a continuacion.
  char aux='1';//esta variable denominada auxiliar ayuda para que el vector tome valores numericos a partir del 1.

  for(i=0;i<9;i++)//este for sirve para poder llenar todo el vector.
  {
   tablero[i]=aux++;//lo que aca pasa es que el tablero va a empezar con el valor numerico 1 hasta llegar a 9 debido a que se le va sumando de a 1 a la variable auxiliar.
  }

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void dibujar_tablero (char tablero[9])//esta funcion se va a encargar de llenar y dibujar el tablero.
{
  system( "CLS" );
        //todos estos printf sirven para dibujar el tablero en donde cada %c representa un lugar del vector.
        printf("\-----    \n");
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
void ingresar_fichas (char tablero[9])//esta funcion sirve para que el jugador pueda meter su ficha X en el tablero.
{
    int x[9];//vector.
    int lugar_escogido[9];//vector para indicar el lugar que se escogio para meter la ficha.
    int y;//variable para el for.
    int respuesta;//variable para el while.

    for (y=0;y<9;y++)
    {
        x[y]=y+1;
        lugar_escogido[y]=0;
    }
    y=0;
    while (y<9)//el proceso no va a terminar hasta que el tablero este lleno.
    {

            system("cls");
            dibujar_tablero(tablero);//funcion que dibuja y llena el tablero con numeros.
            printf("ingrese un numero del 1 al 9 para ingresar su ficha = ");
            scanf("%d",&respuesta);
            if (lugar_escogido[respuesta-1]==0 && respuesta > 0 && respuesta < 10)//si la respuesta esta entre 0 y 10 entonces ocurre lo siguiente.
            {
                tablero[respuesta-1]= 'X';//en el casillero que elige el usuario se pondra una X.
                lugar_escogido[respuesta-1]=1;//se va a ocupar el lugar donde el usuario quiera.
                y++;// si lo anterior no se cumple se vuelve a repetir el ciclo.
                dibujar_tablero(tablero);//funcion que dibuja y llena el tablero con numeros.
            }
    }

system("cls");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


