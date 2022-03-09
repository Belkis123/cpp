#include <iostream>


using namespace std;
extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos (int opcion)
{
    system ("cls");

    int opcionProducto = 0;
    switch (opcion)
    {
    case 1:
    {
        
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1- Capuccino" << endl;
        cout << "2- Expresso" << endl;
        cout << "3- Latte" << endl;
        cout << endl;

        cout << "Ingrese una Opcion: ";
        cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
               agregarProducto ("1 Capuccino - L 40.00",1, 40);
               break;
            case 2:
               agregarProducto ("1 Expresso - L 30.00",1, 30);
                break;

            case 3:
               agregarProducto ("1 Latte - L 35.00",1, 35);
                break;

            
            default:
                {
                    cout <<"opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl ;
            cout << "Producto Agregado" << endl << endl;
            system ("pause");

        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1- Granita de Cafe" << endl;
        cout << "2- Mochaccino" << endl;
        cout << "3- Frapuchatta" << endl;
        cout << endl;

        cout << "Ingrese una Opcion: ";
        cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
               agregarProducto ("1 Granita de Cafe - L 30.00",1, 30);
               break;
            case 2:
               agregarProducto ("1 Mochaccino - L 40.00",1, 40);
                break;

            case 3:
               agregarProducto ("1 Frapuchatta - L 50.00",1, 50);
                break;

        
           default:
           {
               cout <<"opcion no valida";
               return;
             break;

         }

     }

            cout << endl ;
            cout << "Producto Agregado" << endl << endl;
            system ("pause");

        break;

    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1- Chilena de Guayaba" << endl;
        cout << "2- Chilena de Leche" << endl;
        cout << "3- Galleta de Mantequilla" << endl;
        cout << endl;

        cout << "Ingrese una Opcion: ";
        cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
               agregarProducto ("1 Chilena de Guayaba - L 30.00",1, 30);
               break;
            case 2:
               agregarProducto ("1 Chilena de Leche- L 35.00",1, 35);
                break;

            case 3:
               agregarProducto ("1 Galleta ded Mantequilla- L 35.00",1, 35);
                break;

            
            default:
                {
                    cout <<"opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl ;
            cout << "Producto Agregado" << endl << endl;
            system ("pause");

        break;

     }

        default:
        break;

      }

 }
