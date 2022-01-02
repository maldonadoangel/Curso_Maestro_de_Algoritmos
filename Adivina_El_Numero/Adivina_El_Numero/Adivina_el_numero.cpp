//Crear un programa que te solicite numeros hasta encontrar el correcto
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

	int numeroMagico = rand() % 100;
	int numero = 0;
	int contador = 0;

	do {
		contador++;
		cout << "Ingresa el numero a adivinar: ";
		cin >> numero;

		if (numero < numeroMagico) {
			cout << "Tu numero es menor al numero magico" << endl;
		}else if(numero > numeroMagico) {
			cout << "Tu numero es mayor al numero magico" << endl;
		}


	} while (numero != numeroMagico);

	cout << "Felicidades acertaste, la cantidad de intentos es: " << contador << endl;


	system("pause");

	return 0;
}