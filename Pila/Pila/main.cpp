#include <iostream>
#include <conio.h>
#include <stdlib.h> //new

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo*&, int);

int main() {
	Nodo* pila = NULL;
	int n1, n2 = 0;
	cout <<" Digite un numero"  << endl;
	cin >> n1;
	agregarPila(pila, n1);
	cout << "Digite otro numero en la Pila" << endl;
	cin >> n2;
	agregarPila(pila, n2);
	
	system("pause");
	return 0;
}

void agregarPila(Nodo *&pila, int n) {
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout << "Se agrego correctamente el numero a la PILA" << endl;

}