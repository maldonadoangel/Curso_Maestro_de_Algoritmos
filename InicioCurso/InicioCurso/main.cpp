//Bienvenido al curso completo de C++
#include <iostream>
#include <string>

using namespace std;

int main() {
	string nombre;

	cout << "Hola Mundo" << endl;
	cout << "Ingresa tu nombre: ";
//getline, proviene de la libreria string, nos permite guardar cadenas de texto incluyendo espacios en blanco, se recomienda usar este.
	getline(cin, nombre);
	cout << "Bienvenido al mundo de c++: " + nombre << endl;

	return 0;
}