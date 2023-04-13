#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

typedef struct Producto {
    int ProductoID; //Numerado en ciclo iterativo
    int Cantidad; // entre 1 y 10
    char *TipoProducto; // Algún valor del arreglo TiposProductos
    float PrecioUnitario; // entre 10 - 100
}Producto;

struct Cliente {
    int ClienteID; // Numerado en el ciclo iterativo
    char *NombreCliente; // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    Producto *Productos; //El tamaño de este arreglo depende de la variable
// “CantidadProductosAPedir”
}typedef Cliente;

//funciones
void cargarCliente(Cliente *CLIENTE[], int cant);

int main()
{
    srand(time(NULL));
    int cantCli;
    Cliente *CLIENTES[100];
 
    printf("Ingrese la cantidad de clientes: ");
    scanf("%d", &cantCli);
  *CLIENTES =(Cliente *)malloc(sizeof(Cliente)*cantCli);

/*
    for (int i = 0; i < cantCli; i++)
    {
        printf("\n-----------Cliente N %d", i++);
         CLIENTES[i].ClienteID=i;
         printf("\nNombre: ");
         gets(CLIENTES[i].NombreCliente);
         CLIENTES[i].CantidadProductosAPedir=1+ rand()  % 6;
         int indice = rand()% 5;
         strcpy(CLIENTES[i].Productos,TiposProductos[indice]);
         


        
        
    }*/
    
cargarCliente(CLIENTES,cantCli);

    return 0;
}

void cargarCliente(Cliente *CLIENTE[], int cant){
    char *Buff, *Buff3;
    int *Buff2;
    
int k=1;
    Buff= (char *) malloc(100*sizeof(char));
    Buff2 =(int *)malloc(sizeof(int));
      
    for (int i = 0; i < cant; i++)
    {
        printf("\nIngresar datos cliente N%c%d",167,k);
       
       k++;
     //   CLIENTE[i]->ClienteID=i+1;
        printf("\nNombre: ");
        gets(Buff);
        CLIENTE[i]->NombreCliente=(char *) malloc((strlen(Buff)+1)*sizeof(char));
        strcpy(CLIENTE[i]->NombreCliente,Buff);
   
      
      // CLIENTE[i]->CantidadProductosAPedir= 1+ rand()  % 6;
       /*CLIENTE[i]->Productos = (Producto *)malloc(CLIENTE[i]->CantidadProductosAPedir * sizeof(Producto));
       
         for (int k = 0; k < CLIENTE[i]->CantidadProductosAPedir; k++)
         {
             int indice=rand()%4;
    
             strcpy(CLIENTE[i]->Productos,TiposProductos[indice]);
         }*/ 
    }
    
}