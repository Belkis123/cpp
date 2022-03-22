#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
  double numero,raiz;
 
 
  cout << "Calcular la Raiz Cuadrada" <<endl;
  cout <<endl;
  cout << "	Ingrese un numero para obtener la raiz cuadrada:";
  cin >> numero;
 
  raiz = sqrt(numero);
 
  cout << "La raiz cuadrada de " << numero << " es : " << raiz << endl;
 
  return 0;
}
