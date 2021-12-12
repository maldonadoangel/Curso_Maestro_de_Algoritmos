//Realizar un programa que realice la cantidad suma de cuadrados solicitado por el usuario

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {

	int numero = 0;
	int total = 0;


	cout << "Ingresa la cantidad de sumas al cuadrado que deseas: ";
	cin >> numero;

	for (int i = 0; i <= numero; i++) {
		total = total + (i * i);

	}

	cout << "El resultado final de la suma de cuadrados es: " << total << endl;



	system("pause");
	return 0;
}