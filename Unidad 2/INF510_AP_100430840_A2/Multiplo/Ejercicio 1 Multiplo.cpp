#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
    const int numero = 7;
    int numdesde;
    int numhasta;
    int multiplo;
    float contador = 0;
    float contenedorpromedio = 0;
    float promedio;

    system ("color F1");

    cout << "Promedio de los Multiplos de 7";
        cout << "\n\nIntroducir numero desde : ";
        cin  >> numdesde;
        cout << "Introducir numero hasta : ";
        cin  >> numhasta;

    while (numdesde > numhasta){

        system ("color F4");
        cout << "\n\nEl segundo numero ingresado es menor que";
        cout << " el primero.\n Intentelo de nuevo.";
        Sleep (5000);

        system ("color F1");
        system("CLS");

        cout << "Promedio de los Multiplos de 7";
        cout << "\n\nIntroducir numero desde : ";
        cin  >> numdesde;
        cout << "Introducir numero hasta : ";
        cin  >> numhasta;
    };

    system("CLS");

    cout << endl << "Multiplos de 7 encontrados : " << endl;

    for(int i = numdesde; i <= numhasta; i++)
    {
        if (i % numero == 0)
         {
             contenedorpromedio += i;
             contador++;
             cout << i << endl;
         }
    }

    cout << endl << "Cantidad de multiplos encontrados : " << contador;
    cout << endl << "Sumatoria de los multiplos : " << contenedorpromedio;

    promedio = contenedorpromedio / contador;

    cout << endl << "Promedio de los multiplos encontrados : " << promedio << endl << endl;

    system ("pause");
    return 0;
}
