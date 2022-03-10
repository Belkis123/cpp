#include <iostream>

using namespace std;

double Subtotal, Total;
string listaProductos;
double Impuesto;



void agregarProducto(string descripcion, int cantidad, double precio)

{
    listaProductos= listaProductos + descripcion + '\n';
    Subtotal = Subtotal + (cantidad * precio);
    Impuesto= Subtotal * 0.15;
    Total = Subtotal + Impuesto;


}
void ImprimirFactura()

{
    system ("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout <<"Productos:"<< endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal:" << Subtotal;

    cout << endl;
    cout << "Impuesto:" << Impuesto;

    cout << endl;
    cout << "Total a Pagar:" << Total;


    cout << endl;
    cout << endl;
    system("pause");

}