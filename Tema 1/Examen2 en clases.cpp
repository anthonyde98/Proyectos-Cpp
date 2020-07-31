#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
    float horasemanales;
    float horaextras;
    float incentivo;
    float incentivo2;
    const float pagoporhoras = 250;
    float pagosinhorasextras;
    float montohorasextras;
    int montototal;
    float montototal2;
    int adicional;

    system ("color F1");

    cout << "Introducir horas semanales trabajadas : ";
    cin  >> horasemanales;
    cout << "Introducir horas extras trabajadas : ";
    cin  >> horaextras;
    cout << "Valor adicional : ";
    cin  >> adicional;

    if(horaextras < 10)
    {
        incentivo = (pagoporhoras * 0.25) * horaextras;
    }
    if(horaextras == 10)
    {
        incentivo = (pagoporhoras * 0.50) * horaextras;
    }
    if(horaextras > 10)
    {
        incentivo = (pagoporhoras * 2) * horaextras;
    }

    pagosinhorasextras = horasemanales * pagoporhoras;

    montohorasextras = horaextras * pagoporhoras + incentivo;

    if(horaextras > 20)
    {
        incentivo2 = montohorasextras * 0.02;
    }

    montototal2 = incentivo + incentivo2 + pagosinhorasextras + montohorasextras;

    montototal = incentivo + incentivo2 + pagosinhorasextras + montohorasextras;

    cout << "\n\nPago correspondiente sin horas extra : " << "$" << pagosinhorasextras;
    cout << "\n\nMonto ganado por concepto de horas extra : " << "$" << montohorasextras + incentivo;
    cout << "\n\nMonto Total : " << "$" << pagosinhorasextras + montohorasextras + incentivo2 + incentivo + adicional;

    if ((montototal + adicional) % 2 == 0)
    {
        cout << "\n\n$" << montototal2 + adicional << " es par.\n\n";
    }
    else
    {
        cout << "\n\n$" << montototal2 + adicional << " es impar.\n\n";
    }

    system ("pause");
    return 0;
}
