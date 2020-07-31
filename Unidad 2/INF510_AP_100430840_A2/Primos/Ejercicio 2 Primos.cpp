#include <iostream> //Un numero primo solo puede tener residuo 0 con dos numeros, con el y con el numero 1.
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
    const int T = 30;
    const int TC = 300;
    int contador = 0;

    system ("color F1");

    cout << "Programa de los Numeros Primos del 30 al 300" << endl << endl;

    for (int i = T; i <= TC; i++)//Ciclo del 30 al 300 de x en (x) % y.
    {
        for (int j = 1; j <= i; j++)//Ciclo del 1 al x de y en x % (y).
        {
            if (i % j == 0)//MOD o Residuo.
            {
                ++contador;//Contador de las veces que un numero tiene como residuo 0.
            }
        }
        if (contador == 2)//Un numero primo solo tener 2 en el contador por que solo se conto 2 veces las vueltas con residuo 0.
           {
               cout << i << " - ";//Imprimir el numero primo.
           }

               contador = 0;// Al final el contador debe de volver a 0 para volver a evaluar o tro numero de y en x % (y).

    }
    cout << endl << endl;
    system ("pause");
    return 0;
}
