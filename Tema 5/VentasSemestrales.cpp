#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
    system("color F1");

    double ventamensualcompleta1;
    double ventamensualcompleta2;
    double Total;
    double ventamensual1;
    double ventamensual2;
    int contador = 1;
    double promedio;
    char salir;


    do
    {
       contador = 1;
       cout << "\nVentas del Primer Semestre\n";

       for(int i = 1; i <= 6; i++)
       {
         cout << "\nVenta del mes " << contador << " : ";
         cin  >> ventamensual1;
         ventamensualcompleta1 +=  ventamensual1;
         contador++;
       }

       cout << "\nVentas del Segundo Semestre\n";

       contador = 7;

       for(int i = 1; i <= 6; i++)
       {
         cout << "\nVenta del mes " << contador << " : ";
         cin  >> ventamensual2;
         ventamensualcompleta2 +=  ventamensual2;
         contador++;
       }

       Total = ventamensualcompleta1 + ventamensualcompleta2;

       promedio = (ventamensualcompleta1 + ventamensualcompleta2) / 12;
       cout << "\n\n-------------------------------------------------------------------------------\n\n";

       cout << "Promedio de las ventas : " << promedio;
       cout << "\nMonto de las ventas Primer Semestre        : " << ventamensualcompleta1;
       cout << "\nMonto de las ventas Segundo Semestre       : " << ventamensualcompleta2;
       cout << "\nMonto Total de las ventas del ano completo : " << Total;

       cout << "\n\nPara salir presiona *. Para continuar presiona otra tecla : ";
       cin  >> salir;

       if (salir == '*')
            break;
    }
    while(true);

    return 0;
}
