#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;


//Punteros - declaracion de punteros

//&n = la direccion de memoria de la variable n
//*n = La variable cuya direccion esta almacenada en n

int main() {

	int num, *dir_num;

	num = 20;
	dir_num = &num;

	cout << "Numero: " <<*dir_num<< endl;
	cout << "Direccion de Memoria  " << dir_num << endl;


	return 0;
}