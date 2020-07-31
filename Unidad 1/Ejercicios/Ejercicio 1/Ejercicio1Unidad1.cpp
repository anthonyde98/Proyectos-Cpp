#include <iostream>//Suma,resta,multiplicacion,division y residuo de dos numeros//

using namespace std;

int main(int argc, char** argv)
{
    int Numero1;
    int Numero2;
    int Resultado;

    cout << "\n\nEjercicio 1 Unidad 1"
         << endl << endl << endl;
    cout << "Ingrese El Primer Numero : ";
    cin  >> Numero1;
    cout << "Ingrese El Segundo Numero : ";
    cin  >> Numero2;

         Resultado = Numero1 + Numero2;

    cout << "\n\nLa Suma es : "
         << Resultado
         << endl;

         Resultado = Numero1 - Numero2;

    cout << "\n\nLa Resta es : "
         << Resultado
         << endl;

         Resultado = Numero1 * Numero2;

    cout << "\n\nLa Multiplicacion es : "
         << Resultado
         << endl;

         Resultado = Numero1 / Numero2;

    cout << "\n\nLa Division es : "
         << Resultado
         << endl;

         Resultado = Numero1 % Numero2;

    cout << "\n\nEl Residuo es : "
         << Resultado
         << endl;

    return 0;
}
