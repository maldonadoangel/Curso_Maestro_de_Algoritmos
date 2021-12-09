//Realizar un condigo que implemente la suma de cuadrados
//el usuario debe escoger la n cantidad de valores que desea sumar
#include <iostream>
#include <string>

using namespace std;
int main() {

	int numero;
	int total = 0;
	

	cout << "Bienvenido, ingresa el valor de n para la suma de cuadrados: ";
	cin >> numero;

	for (int i = 0; i <= numero; i++) {
		total = total + i * i;
	}

	cout << "El total de la suma cuadrada es: " << total << endl;


	return 0;
}