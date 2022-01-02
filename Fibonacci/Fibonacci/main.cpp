#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Se debe crear un programa que realice el algoritmo de sucecion fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55…
int main() {
	
	int numero = 0;
	int x = 0;
	int y = 1;
	int z = 1;


	cout << "Ingrese el numero para la secuencia de fibonacci: ";
	cin >> numero;

	for (int i = 1; i<numero; i++) {
		z = x + y; 
		cout << z<<", "; //1, 2
		x = y; //1,2
		y = z;//1,2

	}


	system("pause");
	return 0;
}