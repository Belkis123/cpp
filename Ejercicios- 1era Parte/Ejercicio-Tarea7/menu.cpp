#include <iostream>
#include "menu.h"
#include "productos.h"
#include "factura.h"
#include "AgregarProducto.h"

using namespace std;

 void productos (int opcion);
 void ImprimirFactura();

void menu ()
{

int opcion =0;  

    while(true)
    {
        system ("cls");
        
        cout <<"****";
        cout <<"MENU";
        cout <<"****";
        cout << endl;

        cout <<"1 - Bebidas Calientes" << endl;
        cout <<"2 - Bebidas Frias" << endl;
        cout <<"3 - Reposteria" << endl;
        cout <<"4 - Imprimir Factura" << endl;
        cout <<"0 - Salir" << endl;

        cout << endl;
        cout << "Ingrese una Opcion:";
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }
        if (opcion == 4)
        {
            ImprimirFactura();
        } else {

            productos (opcion);
        }
        
        

 

    }
    
}