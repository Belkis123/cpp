#include <iostream>
 using namespace std;
 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    double subtotal= 0;
    double total= 0;
    double impuesto= 0.15;
    int descuento= 0;
    double  calculoDescuento= 0;
    double calculoImpuesto = 0;
    
    

    cout << "Ingrese el Subtotal de la factura: ";
    cin >> subtotal;


   cout << "Ingrese el Descuento (0,10,15,20) ";
   cin >> descuento;
   
    // Proceso
    calculoDescuento= (subtotal* descuento)/ 100;
    calculoImpuesto= (subtotal - calculoDescuento) * 0.15;
    total= subtotal - calculoDescuento + calculoImpuesto;

    // Salida

      cout << endl;
      cout << "Total a pagar es:" <<total;



	return 0;
}