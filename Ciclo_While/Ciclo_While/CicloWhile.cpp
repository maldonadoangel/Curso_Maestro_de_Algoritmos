//Veremos todo lo relacionado al ciclo while
#include <iostream>
#include <string>
#include <stdlib.h>
//El stdlib.h es utilizado para el system("pause"); y detener el programa
/*Librería stdlib: 
Contiene los prototipos de las funciones, macros, y tipos para utilidades de uso general.*/

using namespace std;

int main() {

	int numeroInicial = 1;
	int numeroFinal = 10;

	while (numeroInicial <= 10) {
		cout << numeroInicial << endl;
		numeroInicial++;

	}

	cout << endl;

	while (numeroFinal >= 1) {
		cout << numeroFinal << endl;
		numeroFinal--;

	}

	system("pause");
	return 0;
}