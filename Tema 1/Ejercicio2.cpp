#include <iostream>//Ejercicio2//
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

using namespace std;

int main(int argc,char** argv)
{
    setlocale(LC_ALL, "");
    system ("color F1");

    int numero;

    cout << "PROGRAMA DE PARES E IMPARES \n\n";
    cout << "Introducir un número :";
    cin  >>  numero;
    cout << endl;

    if (numero % 2 == 0)
    {
        system ("color F2");

        cout << numero << ": Este número es par.\n";
    }

     else
    {
        system ("color F4");

        cout << numero << ": Este número es impar.\n";
    }

    cin.get();
    return 0;
}
