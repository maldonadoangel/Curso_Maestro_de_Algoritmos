#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
	/*Veremos de manera rapida el ciclo do while, este ciclo se ejecuta la menos una vez, esto sin leer la condicion dentro del ciclo*/

	int numeroInicial = 1;

	do {

		cout << "Me ejecute aunque la funcion dice lo contrario."<<endl;
		cout << "Primero me ejecuto y luego pienso. Esto es lo que hace el do while una vez" << endl;


	} while (numeroInicial <= 0);



	system("pause");
	return 0;
}