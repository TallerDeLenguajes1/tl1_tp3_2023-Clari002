#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define FILA 5//años
#define COL 12 //meses
//Consigna: 
/*Una empresa necesita simular la producción de los próximos 5 años para tal fin necesita
generar una matriz (estática) de 5x12 donde cada fila corresponde a un año y cada columna
es un mes. Ud. debe realizar las siguientes tareas:
a. Cargue dicha matriz con valores aleatorios entre 10000 y 50000.
b. Muestre por pantalla los valores cargados
c. Saque el promedio de ganancia por año y muestrelos por pantalla
d. Obtenga el valor máximo y el valor mínimo obtenido informando el “año” y el “mes” de
cuándo ocurrió.*/
//FUNCION PARA LA RESERVA CON MALLOC(), verifica si devuelve NULL
void *ReservarMemoria(int TotBytes);//función que devuelve un puntero a void
void mostrarMenor(char cad[], int anio, int menor);
void mostrarMayor(char cad[], int anio, int mayor);

int main()
{
    srand(time(NULL));
    
    int *pMatriz;

    /*
    pMatriz = (int *)malloc(FILA * COL * sizeof(int)); //Reservo las columnas y filas
    //cargar y mostrar matriz
    for (int i = 0; i <FILA; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            *(pMatriz) = 1+ rand()  % 5;
            printf("%4d ", *(pMatriz));
        }
        printf("\n");
    }*/
    
   int ** pMatriz1 = (int **)ReservarMemoria(FILA * sizeof(int *)); //Reservo las columnas (cada columna es un puntero)
    //cargar
   for (int i = 0; i < FILA; i++)
    {
        pMatriz1[i] = (int *)ReservarMemoria(COL * sizeof(int)); //Reservo las Filas (cada fila es un puntero)
        for (int j = 0; j < COL; j++)
        {
            pMatriz1[i][j] = 10000+ rand()  % 50001;
        }          
    }

    //mostrar

    for (int i = 0; i < FILA; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%4d ", pMatriz1[i][j]);
        }  
         printf("\n");  
    }
    

    //calcular promedio de ganacia por año
    //primer año
   
    float sum1=0;
    for (int j = 0; j < COL; j++)
    {
            sum1 = sum1 + pMatriz1[0][j];
    }

    //segundo año
    
    float sum2=0;
    for (int j = 0; j < COL; j++)
    {
            sum2 = sum2 + pMatriz1[1][j];
    }

       //tercer año
   
    float sum3=0;
    for (int j = 0; j < COL; j++)
    {
            sum3 = sum3 + pMatriz1[2][j];
    }

    //cuarto año
  
    float sum4=0;
    for (int j = 0; j < COL; j++)
    {
            sum4 = sum4 + pMatriz1[3][j];
    }

    
    //quinto año
    
    float sum5=0;
    for (int j = 0; j < COL; j++)
    {
            sum5 = sum5 + pMatriz1[4][j];
    }
    

   printf("\n\n--------------------GANANCIAS POR CADA A%cO---------------------",165);
   printf("\nPrimer a%co: %.2f", 164, sum1/12);
   printf("\nSegundo a%co: %.2f", 164, sum2/12);
   printf("\nTercer a%co: %.2f", 164, sum3/12);
   printf("\nCuarto a%co: %.2f", 164, sum4/12);
   printf("\nQuinto a%co: %.2f", 164, sum5/12);
    
//determinar el min y mayor valor
int mayor=10000, menor=50000;
int aniomenor, mesmeor, aniomay, mesmay, k=1;
for (int i = 0; i < FILA; i++)
{
       for (int j = 0; j < COL; j++)
    {
            //determinar menor
            if ((pMatriz1[i][j])<=menor)
            {
                
                menor = pMatriz1[i][j];
                aniomenor=k;
                mesmeor=j;
            }

            //determinar mayor
            if ((pMatriz1[i][j])>=mayor)
            {
                mayor = pMatriz1[i][j];
                aniomay = k;
                mesmay = j;
            }        
                         
    }
    k++; 
}

//mostrar menor valor
switch (mesmeor)
{
case 0:
   
      mostrarMenor("Enero",aniomenor,menor);
    break;
case 1:

       mostrarMenor("Febrero",aniomenor,menor);
    break;
case 2:

    mostrarMenor("Marzo",aniomenor,menor);
    break;
case 3:

    mostrarMenor("Abril",aniomenor,menor);
    break;
case 4:

       mostrarMenor("Mayo",aniomenor,menor);
    break;
case 5:

       mostrarMenor("Junio",aniomenor,menor);
    break;
case 6:

        mostrarMenor("Julio",aniomenor,menor);
    break;
case 7:

      mostrarMenor("Agosto",aniomenor,menor);
    break;
case 8:

    mostrarMenor("Septiembre",aniomenor,menor);
    break;
case 9:

         mostrarMenor("Octubre",aniomenor,menor);
    break;
case 10:

    mostrarMenor("Noviembre",aniomenor,menor);
    break;
case 11:

         mostrarMenor("Diciembre",aniomenor,menor);
    break;

default:
    break;
}

//mostrar mayor valor
switch (mesmay)
{
case 0:
   
      mostrarMayor("Enero",aniomay,mayor);
    break;
case 1:

          mostrarMayor("Febrero",aniomay,mayor);
    break;
case 2:

      mostrarMayor("Marzo",aniomay,mayor);
    break;
case 3:

     mostrarMayor("Abril",aniomay,mayor);
    break;
case 4:

        mostrarMayor("Mayo",aniomay,mayor);
    break;
case 5:

        mostrarMayor("Junio",aniomay,mayor);
    break;
case 6:

        mostrarMayor("Julio",aniomay,mayor);
    break;
case 7:

      mostrarMayor("Agosto",aniomay,mayor);
    break;
case 8:

    mostrarMayor("Septiembre",aniomay,mayor);
    break;
case 9:

     mostrarMayor("Octube",aniomay,mayor);
    break;
case 10:

     mostrarMayor("Noviembre",aniomay,mayor);
    break;
case 11:

     mostrarMayor("Diciembre",aniomay,mayor);
    break;

default:
    break;
}
 
    
    free(pMatriz);
    
    

    getchar();
    return 0;
}


void *ReservarMemoria(int TotBytes)
{
void *pAux;
  
  if((pAux=malloc(TotBytes))==NULL) {
    printf("No pudo reservar memoria dinámica");
    getchar( ); exit(1);
  }
  return(pAux);
}

void mostrarMenor(char cad[], int anio, int menor){
    printf("\n\n----------------------------------");
    printf("\nEl valor menor fue: %d ", menor);
    printf("\n%d%c a%co",anio, 167,164);
    printf("\nMes: %s", cad);
}

void mostrarMayor(char cad[], int anio, int mayor){
    printf("\n\n----------------------------------");
    printf("\nEl valor mayor fue: %d ", mayor);
    printf("\n%d%c a%co",anio,167, 164);
    printf("\nMes: %s", cad);

}