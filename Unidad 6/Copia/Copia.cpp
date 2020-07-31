#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

int *copiaArreglo(int *, int);

int main(int argc, char** argv)
{
    system("color f1");
    setlocale(LC_ALL, "");

    srand(time(0));

    int * captura;
    int cantidad = rand() % 20 + 1;
    int * arreglo = new int[cantidad];

    cout << "Arreglo al azar \n\n";

    for (int i = 0; i < cantidad; i++)
    {
        arreglo[i] = rand() % 100 + 1;
        cout << i + 1 << ". " << arreglo[i] << endl;
    }

    captura = copiaArreglo(arreglo, cantidad);

    cout << endl;

    cout << "Nuevo arreglo en reverso.\n\n";

    for(int i = 0; i < cantidad; i++)
        {
            cout << i + 1 << ". " << captura[i] << endl;
        }

    cout << endl;
    system ("pause");

    delete arreglo;

    return 0;
}

int *copiaArreglo(int *arreglo, int cantidad)
{
    int * copia = new int[cantidad];

    for(int i = 0; i < cantidad; i++)
        {
            copia[i] = arreglo[(cantidad - 1) - i];
        }

    return copia;

    delete copia;
}
