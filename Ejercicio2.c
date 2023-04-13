#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAMA 5
/*Consigna: Escriba un programa que solicite 5 nombres, los cargue en un vector de punteros char y una
vez cargados los liste por pantalla*/
int main()
{
    char *V[TAMA];
    char *Buff;

    Buff= (char *) malloc(100*sizeof(char));
   
    for (int  i = 0; i < TAMA; i++)
    {
      
        printf("Ingrese nombre: ");
        gets(Buff);    
        V[i]=(char *) malloc((strlen(Buff)+1)*sizeof(char));
        strcpy(V[i],Buff);
    }
    printf("\n");
puts("Los nombres cargados son: ");
//mostrar
for (int i = 0; i < TAMA; i++)
{
   puts(V[i]) ;
}

//liberar memoria
for (int i = 0; i < TAMA; i++)
{
    free(V[i]);
}


    free(Buff);

    getchar();
    return 0;
}