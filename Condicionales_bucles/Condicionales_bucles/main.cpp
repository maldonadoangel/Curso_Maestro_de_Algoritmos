//En este documento veremos como funcionan las condicionales y bucles
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


int main() {
	//Condicional if, haremos un ejercicio donde preguntamos la edad del usuario y verificamos en que rango entra
	//0 a 17 menor de edad
	//18 a 64 adulto
	//65 para arriba, persona de la tercera edad

	int edad;
	string nombre;
	cout << "Bienvenido usuario ingresa tu nombre: ";
	getline(cin, nombre);
	cout << "Ingresa tu edad por favor: ";
	cin >> edad;
	cout << "Verificando tu edad..." << endl;
	//Metodo Sleep para dormir unos segundos el programa, para utilizar este metodo, importamos la libreria windows.h
	Sleep(2000);

	if (edad <= 17) {
		cout << "Eres menor de edad." << endl;
	}
	else if (edad >= 18 and edad <= 64) {
		cout << "Eres Mayor de edad" << endl;
	}
	else {
		cout << "Eres una persona de la tercera edad" << endl;
	}

	cout << "Fin del programa" << endl;



	return 0;
}