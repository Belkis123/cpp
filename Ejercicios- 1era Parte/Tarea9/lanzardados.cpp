#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int dado1,dado2;
string lanzar;


int main()
{
    while (true)
    {
    	cout<<"                          Juego de Dados                      "<<endl;
        cout<<"Ganas con los numeros 2, 4 , pierdes con los numeros 6 y 8 "<<endl;
		
		
		
        cout<<"Lanzar los dados: "<<endl;
        cin>>lanzar;
        
        system ("cls");
        for (int i=0;i<=1;i++)
        {
            srand (time (0));
            dado1=rand()%(6)+1;
            dado2=rand()%(6)+1; 
        }
        cout<<"Dado 1 ["<<dado1<<"]";
        cout<<" Dado 2 ["<<dado2<<"]"<<endl;
        cout<<"La suma de los dados es: ["<<dado1+dado2<<"]"<<endl;
        if (dado1+dado2 == 2 or dado1+dado2 == 4 )
        {
            cout<<endl;
			cout<<"Ganaste "<<endl;
            break;
        }
        if (dado1+dado2 == 6 or dado1+dado2 == 8)
        {
            cout<<endl;
			cout<<"Perdiste "<<endl;
            break;
        }
        
		cout<<endl;
        cout<<"Vuelve a lanzar "<<endl;
        
         
        system ("pause");
        system ("cls");
    }   

     return 0;

}
