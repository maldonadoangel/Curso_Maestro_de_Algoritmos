#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main() {

	int arreglo[5] = { 1,2,3,4,5 };

	for (int i = 4; i >= 0; i--) {
		cout << arreglo[i] << endl;
	}

	system("pause");
	return 0;
}