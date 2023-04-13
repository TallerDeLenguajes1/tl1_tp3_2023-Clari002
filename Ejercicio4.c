#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAMA 100
/*Consigna: Modifique el ejercicio nro 3 para que, en lugar de ingresar un número fijo de nombres, el
usuario pueda indicar previamente la cantidad de nombres que ingresará a continuación*/
int main()
{
    char *V[TAMA];
    char *Buff;
    int cant;
    printf("Ingrese la cantidad de nombre: ");
    scanf("%d", &cant);
    fflush(stdin);
  
    Buff= (char *) malloc(100*sizeof(char));
    int k=1;
    for (int  i = 0; i < cant; i++)
    {
      
        printf("Ingrese nombre N%c%d: ",167,k);
        gets(Buff);    
        V[i]=(char *) malloc((strlen(Buff)+1)*sizeof(char));
        strcpy(V[i],Buff);
        k++;
    }
    printf("\n");
puts("Los nombres cargados son: ");
//mostrar
for (int i = 0; i < cant; i++)
{
   puts(V[i]) ;
}

//liberar memoria
for (int i = 0; i < cant; i++)
{
    free(V[i]);
}


    free(Buff);

    getchar();
    return 0;
}
