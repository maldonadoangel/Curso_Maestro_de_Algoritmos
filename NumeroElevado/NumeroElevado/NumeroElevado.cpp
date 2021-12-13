//Crear un programa que muestre el numero elevado deseado, no puedes utilizar la funcion pow
// x sera el numero y Y es la potencia por lo tanto quedaria de esta manera X^Y

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {

	int x = 0;
	int y = 0;
	int total = 1;

	cout << "Bienvenido ingrese un numero entero: ";
	cin >> x;

	cout << "Ingrese el valor de la potencia: ";
	cin >> y;

	for (int i = 1; i <= y; i++) {
		
		total = total * x;
	}
	cout << "El valor de la potencia es: " << total << endl;
	
	system("pause");
	return 0;
}