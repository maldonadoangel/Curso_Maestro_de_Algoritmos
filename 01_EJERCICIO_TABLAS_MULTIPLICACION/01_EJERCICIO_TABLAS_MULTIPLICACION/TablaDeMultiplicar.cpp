//Crear un programa que ejecute las tablas de multiplicar que solicite el usuario
#include <iostream>
#include <string>

using namespace std;

int main() {

	int numero = 0;

	cout << "Ingrese el valor de la tabla de multiplicar que desea" << endl;
	cin >> numero;

	for (int i = 0; i <= 10; i++) {
		cout << numero << " * " << i << " = " << numero * i << endl;
	}




	return 0;
}