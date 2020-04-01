#include <stdio.h>
#include <stdlib.h>

void refrescar (char tablero[3][3]); //se llama a la funcion.
void introduccion_numeros (char tablero[3][3]); //se llama a la funcion.
void llenar_tablero (char tablero[3][3]); //se llama a la funcion.
void introduccion_fichas (char tablero[3][3]);//se llama a la funcion.
void introduccion_IA (char tablero[3][3]);//se llama a la funcion.

int main()
{
     char tablero [3][3]; //esta matriz vendria siendo nuestro tablero.

     refrescar(tablero);//basicamente reinicia lo que pongamos en esta funcion con los nuevos datos ingresado.
     return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void refrescar (char tablero[3][3]) //esta funcion reinicia e inicia las veces que queramos todas las funciones que coloquemos dentro de esta funcion con sus nuevos datos ingresados.
{

 int a; //variable que se usa para el contador de las veces que se puede colocar todas las fichas (a).la (b) es una variable para saber a quien le toca poner fichas primero.

   a=0;

  introduccion_numeros(tablero); //dicha funcion va a aparecer por pantalla por unica vez, por que el proceso se repite con los nuevos datos ingresados.

 do
 {

  llenar_tablero(tablero); //dicha funcion va a aparecer por pantalla por unica vez, por que el proceso se repite con los nuevos datos ingresados.

  if (a % 2 == 0 ) //si la variable a (que vale 0) se lo divide entre dos (usuarios) y el resultado da cero.
  {
      introduccion_fichas (tablero); //empiezo yo el juego mediante la funcion de llenar el tablero con fichas.

  }
  else //si no.
  {
      introduccion_IA (tablero); //empieza la maquina mediante su funcion de poner fichas aleatoriamente.
  }
  a++; //se suma de a uno hasta llegar a 9 como indica el while de abajo.
 }while (a <= 9); //el ciclo se va a repetir mientras que a sea menor o igual a 9, que vendria siendo las casillas totales del tablero.

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void introduccion_numeros (char tablero[3][3])//esta funcion lo que hace es llenar el tablero con valores numericos para despues poder escoger en que lugar de dicho tablero poner nuestra ficha.
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

void introduccion_fichas (char tablero[3][3]) //esta funcion sirve para yo poder ingresar las fichas en el lugar que quiera.
{
   int c,d,e; //variables para detectar lugares en donde ya hay fichas,c (filas), d (columnas).
   char ficha; //esta variable representa la ficha que nosotros vamos a colocar en el tablero.

   do
   {
       do
       {
          printf("coloca tu ficha en algun lugar del tablero: ");
          fflush (stdin); // lo uso para que el priintf slaga limpio en la pantalla osea sin nigun tipo de error, etc.
          scanf("%c",&ficha);

       }while (ficha < '1'  ||  ficha > '9'); //el ciclo se va a repetir mientras que la ficha este entre la posicion 1 y 9 del tablero.

        e=0;

        switch (ficha) //esto lo que hace es recorrer en este caso todas las posiciones del tablero en busca de una ficha repetida, osea que no se va a poder colocar una ficha en donde ya hay una existente.
       {
           case '1': // en caso de ser la posicion 1 del tablero.
           {
            c=0; //se inicializan las filas en 0.
            d=0; //se inicializan las columnas en 0.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 1 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 2 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '2': // en caso de ser la posicion 2 del tablero.
           {
            c=0; //se inicializan las filas en 0.
            d=1; //se inicializan las columnas en 1.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 2 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 3 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '3': // en caso de ser la posicion 3 del tablero.
           {
            c=0; //se inicializan las filas en 0.
            d=2; //se inicializan las columnas en 2.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 3 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 4 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '4': // en caso de ser la posicion 4 del tablero.
           {
            c=1; //se inicializan las filas en 1.
            d=0; //se inicializan las columnas en 0.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 4 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 5 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '5': // en caso de ser la posicion 5 del tablero.
           {
            c=1; //se inicializan las filas en 1.
            d=1; //se inicializan las columnas en 1.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 5 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 6 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '6': // en caso de ser la posicion 6 del tablero.
           {
            c=1; //se inicializan las filas en 1.
            d=2; //se inicializan las columnas en 2.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 6 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 7 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '7': // en caso de ser la posicion 7 del tablero.
           {
            c=2; //se inicializan las filas en 2.
            d=0; //se inicializan las columnas en 0.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 7 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 8 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '8': // en caso de ser la posicion 8 del tablero.
           {
            c=2; //se inicializan las filas en 2.
            d=1; //se inicializan las columnas en 1.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 8 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 9 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '9': // en caso de ser la posicion 9 del tablero.
           {
            c=2; //se inicializan las filas en 2.
            d=2; //se inicializan las columnas en 2.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 9 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 1 del tablero nuevamente para verificar lo mismo, y asi hasta llegar hasta la posicion 9 otra vex.
            {
               e == 1; //la variable e vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }
       }
    }while (e == 1); //el ciclo se va repetir mientras que e sea igual a 1, significando que la casilla esta ocupada.

    tablero[c][d] ='X'; //esto lo que indica es que nuestra ficha vendria siendo la X.
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void llenar_tablero (char tablero[3][3])//esta funcion se va a encargar de llenar y dibujar el tablero con las fichas que yo ya escogi en la funcion anterior.
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
      if(a < 2)//si el valor de la fila es menor a dos.
      {
          printf("\n-----------\n");//se imprime una linea horizontal para separar las filas.
      }
  }
  printf("\n"); //este printf representa un espacio para separar el tablero de el return 0.
  printf("\n"); //este printf representa un espacio para separar el tablero de el return 0.
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void introduccion_IA (char tablero[3][3]) //esta funcion sirve para que la amquina pueda poner una ficha en el casillero de manera aleatoria.

{
    int a, b, c; //variables que solo se usan para el proceso de numeros random.

    srand(time(NULL)); //esto sirve para que la maquina escoja aleatoriamnte con la ayuda de variables creadas especificamente para este procesos.

    do
    {
         a = rand() % 3; //va a dar un numero aleatoriamente entre 0 y 2.(filas).
         b = rand() % 3; //va a dar un numero aleatoriamente entre 0 y 2.(columnas).
         c = 0;

         if(tablero [a][b] == 'X' || tablero [a][b] == 'O') //si dichas posiciones escogidas aleatoriamente son iguales o tienen encima una X u O significa que estan ocupadas.
         {
             c=1; //la variable c vendria siendo usada como via de escape del if para poder saber si la casilla esta ocupada o no.
         }
    }while (c == 1); //el ciclo se va a repetir mientras que c sea igual a uno, osea que se necesita escoger otra posicion para colocar la ficha de la maquina.

    tablero[a][b] ='O'; //esto lo que indica es que la ficha de la maquina vendria siendo la O.
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
