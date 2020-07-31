#include <iostream>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <iomanip>

using namespace std;

struct circulo
{
    float PI;
    float Area;
    float radio;
    float diametro;
};

int main(int argc, char** argv)
{
    circulo circulo;
    char salir;

    setlocale(LC_ALL, "");
    system ("color f1");

    cout << left << setw(35) << "\n" << "Programa para calcular el radio y el área de un círculo";
    Sleep(5000);
    do
    {
        system ("cls");

        cout << "\nINFORMACIÓN\n\nArea = PI x Radio²\nRadio = diametro /2\nPI = 3.14159";
        cout << "\n\nIngrese el diametro del circulo : ";
        cin  >> circulo.diametro;

        circulo.PI = 3.14159;
        circulo.radio = circulo.diametro / 2;
        circulo.Area = circulo.PI * pow(circulo.radio, 2);

        cout << "\n\nEl Area del circulo es  : " << circulo.Area << " metros²";
        cout << "\nEl Radio del circulo es : " << circulo.radio << " metros";

        cout << "\n\n¿Salir? (s) | (n) : ";
        cin  >> salir;

    }
    while(tolower(salir) != 's');


    return 0;
}
