#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

struct Registro
{
    long factNumero;
    string factCliente;
    string factFecha;
    double factMonto;
    double factDescuento;
    double factNeto;
};
int main(int argc, char** argv)
{
    Registro cliente;

    system ("color F1");

    cout << "\nNumero de Factura : ";
    cin  >> cliente.factNumero;
    cin.ignore();
    cout << "Nombre del Cliente : ";
    getline(cin, cliente.factCliente);
    cout << "Fecha de la Fctura : ";
    getline(cin, cliente.factFecha);
    cout << "Monto : ";
    cin  >> cliente.factMonto;
    cout << endl;

    if(cliente.factMonto >= 20000 && cliente.factMonto < 30000)
        cliente.factDescuento = cliente.factMonto * 0.07;
    if(cliente.factMonto >= 30000 && cliente.factMonto < 50000)
        cliente.factDescuento = cliente.factMonto * 0.10;
    if(cliente.factMonto >= 50000)
        cliente.factDescuento = cliente.factMonto * 0.14;
    if(cliente.factMonto < 20000)
        cliente.factDescuento = 0;

    cliente.factNeto = cliente.factMonto - cliente.factDescuento;

    cout << "*****************************************";
    cout << "\nNumero de la Factura : " << cliente.factNumero;
    cout << "\nNombre del Cliente : " << cliente.factCliente;
    cout << "\nFecha de la Factura : " << cliente.factFecha;
    cout << "\nMonto : " << cliente.factMonto;
    cout << "\nDescuento : " << cliente.factDescuento;
    cout << "\nMonto Neto : " << cliente.factNeto;
    cout << endl << endl << "*****************************************";
    cout << endl << endl;
    system ("pause");
    return 0;
}
