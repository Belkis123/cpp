#include <iostream>
#include "startShip.h"
#include "snake.h"
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

     startShip();
     snake();
     
 };

 int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true) {
            
        system ("cls");

        cout << endl;
        cout << "****************" << endl;
        cout << "* MENU DE JUEGOS *" << endl;
        cout << "****************" << endl;
        cout << endl;
        cout << " ELIGE UN JUEGO! " << endl;
        cout << endl;
        cout << "1 - starTShip" << endl;
        cout << "2 - snake" << endl;
        cout << "0 - Salir" << endl;
        cout << endl;
        cout << "Ingrese una opcion del menu de Juegos: ";
        cin >> opcion;
        
        switch (opcion)
        {
        case 1:
            startShip();
            break;
        
        case 2:
            snake();
            break;
         
        default:
        break;
        }

        system ("pause");
        cout << endl;
        if (opcion == 0)
        {
            break;
        }
    }

    return 0;
}