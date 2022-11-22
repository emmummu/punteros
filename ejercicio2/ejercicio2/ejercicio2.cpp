#include <iostream>
#include <stdlib.h>
#include <vector>
#include <locale.h>

using namespace std;


int main()
{
    vector<int> vectorT;

    int* puntero;
    int nopuntero;

    puntero = &nopuntero;
    int resultado = 0;

    for (int i = 0; i <= 3; i++)
    {
        cout << "digita tu numero\n";
        cin >> nopuntero;
        vectorT.push_back(nopuntero);
    }

    for (int i = 0; i <= 3; i++) {
        nopuntero = vectorT[i];
        resultado += (*puntero) * (*puntero);
    }
    cout << resultado;
}
