//Crear un programa que tope 6 temperatures y muestre la media y el valor mayor y menor de las temperaturas
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	float temperatura = 0;
	float total = 0;
	float media = 0;
	float menor = 9999;
	float mayor = 0;
	for (int i = 1; i <= 6; i++) {
		cout << "Temperatura " << i << ":";
		cin >> temperatura;
		total = total + temperatura;
		if (temperatura > mayor) {
			mayor = temperatura;
			cout << "El mayor actual es: " << mayor<<endl;
		}
		if (temperatura < menor) {
			menor = temperatura;
		}

	}

	media = total / 6;
	cout << "La media de las temperaturas es: " << media << endl;
	cout << "El valor mayor de la temperatura registrada es: " << mayor << endl;
	cout << "La temperatura menor de la temperatura registrada es: "<<menor<<endl;

	system("pause");
	return 0;
}