#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	using namespace std;

int main(int argc, char** argv) {
	

	/// datos de entrada
	int a= 0;
	int b= 0;
	int suma;
	int resta;
	int multiplicacion; 
	int division;
	
	
	
	cout<<"Ingrese el valor de a:";
	cin>>a;
	
    cout<<endl;
    
    cout<<"Ingrese el valor de b:";
	cin>>b;
	cout<<endl;
	
	//Proceso
	suma = a+b;
	resta = a-b;
    multiplicacion= a*b;
    division= a/b;
	//Salida
	cout << "La suma de a+b es:"<<suma;
	 cout<<endl;
	cout << "La resta de a-b es:"<<resta;
	 cout<<endl;
	cout << "La multiplicacion de a*b es:"<<multiplicacion;
	 cout<<endl;
	cout << "La division de a/b es:"<<division;
	

	return 0;
}
