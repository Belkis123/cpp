#include <iostream>

using namespace std;

double Subtotal;
string listaProductos;


void agregarProducto(string descripcion, int cantidad, double precio)

{
    listaProductos= listaProductos + descripcion + '\n';
    Subtotal = Subtotal + (cantidad * precio);

    
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
    cout << endl;
    system("pause");

}