// ejercicio1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <locale.h>
#include <conio.h>
using namespace std;


int main()
{
	int Pvector[3];
	int Svector[3];



	vector<int> resultado;

	int opcion;

	int producto;

	int* putero;
	int* puteroS;


	for (int i = 0; i <= 2; i++) {

		cout << "digita el numero del primer vector\n";
		cin >> Pvector[i];


		cout << "digita el numero del segundo vector\n";
		cin >> Svector[i];


	}

	putero = &Pvector[0];
	puteroS = &Svector[0];


	for (int i = 0; i <= 2; i++) {
		producto = *putero++ * *puteroS++;
		resultado.push_back(producto);
		cout << resultado[i] << endl;
	}

}