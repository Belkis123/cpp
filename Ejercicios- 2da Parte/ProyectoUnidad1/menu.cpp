#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	
	int opcion = 0;
	
	while(true){
		system ("cls");
		cout << "**********" <<endl;
		cout << "   MENU    " <<endl;
		cout << "**********" <<endl;
		
		cout <<endl;
		cout << "1-StartShip" <<endl;
		cout << "2- Snake" <<endl;
		cout << "0 - Salir" <<endl;

        cout << "Ingrese un juego del menu: " <<endl;
		cin >> opcion;
		
		if (opcion==1){
			system ("cls");
			cout <<"Estas en el Juego StartShip"<<endl;
			system ("pause");
		}
	
		if (opcion==2){
			system ("cls");
			cout <<"Estas en el juego Snake"<<endl;
			system ("pause");
		}
		
		if (opcion==0){
			break;
		}	
	}
	
	cout << endl;
	cout <<"Saliste  del Sistema";
	

    
    return 0;
}