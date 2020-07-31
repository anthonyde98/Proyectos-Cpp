#include <iostream>//Ejercicio3//
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

using namespace std;

int main(int argc,char** argv)
{
    setlocale(LC_ALL, "");
    system ("color F1");

    cout << "PROGRAMA PARA LOS SALARIOS\n\n";

    const float salario = 2000.00;
    float venta1;
    float venta2;
    float venta3;
    float ventas;
    float incentivo;

    cout << "Primera Venta: \n";
    cin  >> venta1;
    cout << "Segunda Venta: \n";
    cin  >> venta2;
    cout << "Tercera Venta: \n";
    cin  >> venta3;


    ventas = venta1 + venta2 + venta3;

    incentivo = ventas * 0.05;

    if (ventas >= 5000)
    {
        cout << "\nMonto Total de las Ventas : $" << ventas << endl;
        cout << "Incentivo : $" << incentivo << endl;
        cout << "Salario Total : $" << salario + incentivo << endl << endl;
    }
    if (ventas < 5000)
    {
        cout << "\nMonto Total de las Ventas : $" << ventas << endl;
        cout << "Incentivo : " << "No hay incentivo." << endl;
        cout << "Salario Total : $" << salario + incentivo << endl << endl;
    }

    cin.get();
    return 0;
}
