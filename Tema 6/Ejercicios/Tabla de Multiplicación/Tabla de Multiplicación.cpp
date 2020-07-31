#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
{
    int numero;
    int resultado[12];
    char salir;

    system("color f1");
    setlocale(LC_ALL, "");

    do
    {
        cout << "TABLA DE MULTIPLICACION";
        cout << "\n\nDigite un número : ";
        cin  >> numero;

        cout << endl;

        for(int i = 0; i < 12; i++)
        {
            resultado[i] = numero * (i + 1);
            cout << numero << " X " << i + 1 << " = " << resultado[i] << endl;
        }
        cout << "\n¿Desea continuar? Si (s) | No (n) : ";
        cin  >> salir;

        cout << endl;
    }
    while(tolower(salir) != 'n');

    return 0;
}
