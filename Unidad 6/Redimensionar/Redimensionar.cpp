#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

int *cambiaArreglo(int *, int, int);

int main(int argc, char** argv)
{
    system("color f1");
    setlocale(LC_ALL, "");

    srand(time(0));

    int cantidad = rand() % 20 + 1;
    int cantidad1;
    int * arreglo = new int[cantidad];

    cout << "Arreglo al azar \n\n";

    for (int i = 0; i < cantidad; i++)
    {
        arreglo[i] = rand() % 100 + 1;
        cout << i + 1 << ". " << arreglo[i] << endl;
    }

    cout << "\nTamaño nuevo del arreglo : ";
    cin  >> cantidad1;
    cout << endl;

    int * captura = new int[cantidad1] ;

    captura = cambiaArreglo(arreglo, cantidad, cantidad1);

    cout << "Nuevo arreglo\n\n";

    for(int i = 0; i < cantidad1; i++)
    {
        cout << i + 1 << ". " << captura[i] << endl;
    }

    cout << endl;
    system ("pause");

    delete captura;

    return 0;
}

int *cambiaArreglo(int *arreglo, int cantidad, int cantidad1)
{
    if(cantidad > cantidad1)
    {
        for(int i = 0; i < cantidad1; i++)
        {
            arreglo[i];
        }
    }
    else
        for(int i = 0; i < cantidad; i++)
        {
            arreglo[i];
        }

        for(int i = cantidad; i < cantidad1; i++)
        {
           arreglo[i] = 0;
        }

        return arreglo;
}
