
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <locale.h>
using namespace std;

void intento(vector<int>& si, vector<int> no);
int main()
{
	vector<int> almacen;
	vector<int> diosestamuerto;
	int opt;
	int duracion;
	int yabasta;

	cout << "que tan larga te gusta... el vector" << endl;
	cin >> duracion;

	for (int i = 0; i < duracion; i++)
	{
		cout << "digita un numero\n";
		cin >> opt;

		almacen.push_back(opt);
	}

	intento(almacen, diosestamuerto);
}

void intento(vector<int>& si, vector<int> no) {
	int* punteroasquerozo;

	int contador = 0;
	for (int i = 0; i < si.size(); i++)
	{
		contador = 0;
		cout << contador << endl;

		punteroasquerozo = &si[i];

		for (int j = 0; j < si.size(); j++) {
			if (*punteroasquerozo == si[j]) {
				contador++;
			}
		}
		cout << contador << endl;

		if (contador <= 1) {
			no.push_back(*punteroasquerozo);
			contador = 0;
		}
	}
	cout << "este es el vector resultante" << endl;
	for (int i = 0; i < no.size(); i++) {
		for (int j = i + 1; j < no.size(); j++) {
			if (no[i] < no[j]) {
				int aux = no[j];
				no[j] = no[i];
				no[i] = aux;
			}
		}

		cout << no[i] << endl;
	}
}