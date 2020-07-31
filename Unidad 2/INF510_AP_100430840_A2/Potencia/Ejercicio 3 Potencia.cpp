#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
    double base;
    int exponente;
    float potencia = 1;
    float resultado;

    system ("color F1");

    cout << "Programa Para Calcular Potencias\n\n";
    cout << "Introduce la base : ";
    cin  >> base;
    cout << "Introduce el exponente : ";
    cin  >> exponente;



    cout << endl << base << "^" << exponente << " : ";

    if(exponente < 0)
    {
        for (int i = -1; i >= exponente; i--)
       {
           potencia = potencia * base;
       }
       cout.precision(10);
       cout << fixed << 1/potencia << endl << endl;
    }
    else
    {
         for (int i = 1; i <= exponente; i++)
        {
            potencia = potencia * base;
        }
        cout.precision(0);
        cout << fixed << potencia << endl << endl;
    }

    system ("pause");
    return 0;
}
