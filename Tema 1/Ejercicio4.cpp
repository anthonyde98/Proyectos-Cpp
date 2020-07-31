#include <iostream>//Ejercicio3//
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

using namespace std;

int main(int argc,char** argv)
{
    setlocale(LC_ALL, "");
    system ("color F1");

    const float pagoporhora = 78.00;
    float horas;
    float incentivo;
    float salario;

    cout << "Horas trabajadas: ";
    cin  >> horas;

    salario = horas * 78.00;
    incentivo = salario * 0.10;

    if (horas >= 8)
    {
        cout << "\nPago Sin Incentivo: $" << salario << endl;
        cout << "Incentivo: $" << incentivo << endl;
        cout << "Salario Total : $" << salario + incentivo << endl;
    }
    else
    {
        cout << "\nPago Sin Incentivo: $" << salario << endl;
        cout << "Incentivo: " << "No hay incentivo" << endl;
        cout << "Salario Total: $" << salario << endl;
    }
    cin.get();
    return 0;
}
