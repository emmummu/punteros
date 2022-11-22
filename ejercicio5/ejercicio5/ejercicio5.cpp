// ejercicio1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <locale.h>
#include <conio.h>
using namespace std;

void odiomivida(vector<int>& asperger, vector<int>& autismo);
int main()
{
	vector<int> Pvector;
	vector<int> Svector;



	vector<int> resultado;

	

	int* putero;
	int* puteroS;


	for (int i = 0; i <= 2; i++) {

		cout << "digita el numero del primer vector\n";
		cin >> Pvector[i];


		cout << "digita el numero del segundo vector\n";
		cin >> Svector[i];

	}
	
}

void odiomivida(vector<int>& asperger, vector<int>& autismo) {
	vector<int> resultado;

	for (int i = 0; i < asperger.size(); i++)
	{
		resultado.push_back(asperger[i]);

	}

	for (int i = 0; i < autismo.size(); i++)
	{
		resultado.push_back(autismo[i]);

	}
	for (int i = 0; i < resultado.size(); i++) {
		for (int j = i + 1; j < resultado.size(); j++) {
			if (resultado[i] <resultado[j]) {
				int yeah =resultado[j];
			resultado[j] = resultado[i];
				resultado[i] = yeah;
			}
		}

		cout << resultado[i] << ",";
	}

}
