#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;  
 
int random();
 
 
int main()
{
    int filas = 5;
	int columnas = 5; 
	int  TotalSuma = 0;
	int s;
    srand(time(NULL));
    
 
    int matriz[filas][columnas];
 
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = random();
            TotalSuma += matriz[i][j];
        }
 
 

    cout<<" \n Sumar todos los elementos de un arreglo bidimensional"<<endl;
	cout<<endl;
	
      
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf(" %2d  ", matriz[i][j]);
        }
        printf("\n");
    }
 
    printf("\n TotalSuma: %d\n", TotalSuma);
 
    return 0;
	}
	 
	int random()
	{
	    return rand() % 10 + 1;
	}
