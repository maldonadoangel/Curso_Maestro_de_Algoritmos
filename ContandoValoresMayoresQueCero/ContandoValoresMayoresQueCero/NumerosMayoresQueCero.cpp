#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	//Crear un programa que lea los numeros mayores a cero y que muestre cuantos se introducieron

	int numero = 0;
	int contador = 0;

	do {
		cout << "Ingrese un numero:";
		cin >> numero;
		contador = contador + 1;

	} while (numero != 0);

	cout << "El numero de intentos: " << contador << endl;



	system("pause");
	return 0;
}