#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
    int numero;
    int salir;
    system ("color F1");

    do{
    do
    {
       cout << "\n\nIntroduce un numero entre 1 y 15 : ";
       cin  >> numero;
    }
    while (numero < 1 || numero > 15);

    cout << "\n\nEl numero ingresado '" << numero << "' es correcto ya que esta entre 1 y 15." << endl << endl ;

    Sleep(5000);

    cout << " ¿Quieres salir? SI: 1  NO: 2 : ";
    cin  >> salir;

    if(salir == 1)
        break;

    system ("CLS");
    }
    while (true);

    system ("pause");
    return 0;
}
