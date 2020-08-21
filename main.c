#include <stdio.h>
#include <stdlib.h>

void llenar_tablero (char tablero[3][3]); //se llama a la funcion.
void introduccion_numeros (char tablero[3][3]);
void introduccion_fichas (char tablero[3][3]);
int main()
{
     char tablero [3][3]; //tablero.
     introduccion_numeros(tablero);
     llenar_tablero(tablero);//dibuja tablero.
     introduccion_fichas(tablero);
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
void introduccion_fichas (char tablero[3][3]) //esta funcion sirve para yo poder ingresar las fichas en el lugar que quiera.
{
   int c,d,e; //variables para detectar lugares en donde ya hay fichas,c (filas), d (columnas).
   char ficha; //esta variable representa la ficha que nosotros vamos a colocar en el tablero.

   do
   {
       do
       {
          printf("coloca tu ficha en algun lugar del tablero: ");
          fflush (stdin);
          scanf("%c",&ficha);

       }while (ficha < '1'  ||  ficha > '9');

        e=0;

        switch (ficha) //esto lo que hace es recorrer en este caso todas las posiciones del tablero en busca de una ficha repetida, osea que no se va a poder colocar una ficha en donde ya hay una existente.
       {
           case '1':
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

           case '2':
           {
            c=0; //se inicializan las filas en 0.
            d=1; //se inicializan las columnas en 1.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 2 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 3 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '3':
           {
            c=0; //se inicializan las filas en 0.
            d=2; //se inicializan las columnas en 2.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 3 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 4 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '4':
           {
            c=1; //se inicializan las filas en 1.
            d=0; //se inicializan las columnas en 0.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 4 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 5 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '5':
           {
            c=1; //se inicializan las filas en 1.
            d=1; //se inicializan las columnas en 1.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 5 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 6 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '6':
           {
            c=1; //se inicializan las filas en 1.
            d=2; //se inicializan las columnas en 2.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 6 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 7 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '7':
           {
            c=2; //se inicializan las filas en 2.
            d=0; //se inicializan las columnas en 0.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 7 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 8 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '8':
           {
            c=2; //se inicializan las filas en 2.
            d=1; //se inicializan las columnas en 1.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 8 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 9 del tablero para verificar lo mismo, y asi hasta llegar hasta la posicion 9.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }

           case '9':
           {
            c=2; //se inicializan las filas en 2.
            d=2; //se inicializan las columnas en 2.
            if (tablero[c][d] =='X' || tablero[c][d] =='O') //este if lo que hace es que si en la posicion 9 del tablero ya hay puesta una ficha entonces se corre hasta la posicion 1 del tablero nuevamente para verificar lo mismo, y asi hasta llegar hasta la posicion 9 otra vex.
            {
               e == 1;
               printf ("esta casilla esta ocupada, elija otra\n\n");
            }
            break;
           }
       }
    }while (e == 1); //el ciclo se va repetir mientras que e sea igual a 1, significando que la casilla esta ocupada.

    tablero[c][d] ='X'; //nuestra ficha vendria siendo la X.
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/** primer intento **/
object comprador
{

	var KiloDePapa = 0


	method CuantantasPapasCompraste()
	{
		return KiloDePapa
	}

	method Compre(CantidadDePapas)
	{
		if (KiloDePapa< 5)
		{
			console.println ("faltan mas papas para llegar al kilo")
			KiloDePapa = KiloDePapa + CantidadDePapas
		}

	}

	method VolverAcomprarLasPapas()
	{
		 KiloDePapa = 0
	}

}
