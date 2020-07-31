#include <iostream>//Promedio de dos numeros//

using namespace std;

int main(int argc, char** argv)
{
    double Numero1;
    double Numero2;
    double Numero3;
    double Resultado;

    cout << "\n\nPrograma Ejercicio 2 Unidad 1"
         << endl << endl << endl;
    cout << "Ingrese El Primer Numero : ";
    cin  >> Numero1;
    cout << "Ingrese El Segundo Numero : ";
    cin  >> Numero2;
    cout << "Ingrese El Tercer Numero : ";
    cin  >> Numero3;

    Resultado = (Numero1 + Numero2 + Numero3) / 3;

    cout << "\n\nEl Promedio es : "
         << Resultado <<endl;

    return 0;
}
