#include <iostream>//Ejercicio1//
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

using namespace std;

int main(int argc,char** argv)
{
    setlocale(LC_ALL, "");
    system ("color F1");

    int numero;

    cout << "PROGRAMA DE MAYOR Y MENOR\n\n";
    Aqui: cout << "Introducir un número :";
    cin  >>  numero;
    cout << endl;

    if (numero < 100)
    {
        system ("color F4");

        cout << numero << ": VALOR PEQUEÑO INFERIOR A 100\n";
    }

     if (numero > 100)
    {
        system ("color F2");

        cout << numero << ": VALOR POR ENCIMA DE 100\n";
    }

    cin.get();

    return 0;
}
