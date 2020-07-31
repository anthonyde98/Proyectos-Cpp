#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

int main(int argc, char** argv)
 {
     float MontoSolicitado;
     float CantidadAnos = 3;
     float CantidadMeses;
     float InteresMensual;
     float PreMontoMensual;
     float tasa;

     setlocale(LC_ALL, "");
     system ("color F1");

     cout << "\n\n                                 Bienvenido A la Calculadora de Prestamos del Banco BONANZA";
     Sleep(5000);
     system ("CLS");

    do
    {
     do
     {
         if(CantidadAnos < 3 || CantidadAnos > 10)
         {
             system ("CLS");
             system ("color FC");
             cout << "\nEl Plazo Introducido Es Incorrecto.\nPor Favor Lea El Pequeño Cuadro Anterior de Los Plazos e Intentelo de Nuevo.";
             Sleep(7000);
             system ("CLS");
             system ("color F1");
         }

         cout << "Banco BONANZA" << endl
         << endl << "*********************************************"
         << endl <<"-Plazo minimo a pagar el prestamo: 3 años.-\n-Plazo maximo a pagar el prestamo: 10 años.-"
         << endl << "*********************************************" << endl << endl;

         cout << "\nPrestamo a solicitar : ";
         cin  >> MontoSolicitado;
         cout << "Plazo a pagar el prestamo en años: ";
         cin  >> CantidadAnos;
     }
     while(CantidadAnos < 3 || CantidadAnos > 10);

     CantidadMeses = CantidadAnos * 12;

     if (MontoSolicitado < 150000 && CantidadAnos <= 5)
     {
         tasa = 6.8;

         InteresMensual = (tasa / 100) * MontoSolicitado / 12;
         PreMontoMensual = MontoSolicitado / CantidadMeses + InteresMensual;

         cout << "\nMonto Mensual año 1 : RD$" << PreMontoMensual << endl << endl;

         for(int i = 1; i < CantidadAnos; ++i)
         {
             tasa = 2;
             PreMontoMensual = PreMontoMensual * ((CantidadAnos - i) * 12);
             InteresMensual = (tasa / 100) * PreMontoMensual / 12;
             PreMontoMensual = PreMontoMensual / ((CantidadAnos - i) * 12) + InteresMensual;
             cout << "Monto Mensual año " << i + 1 << " : RD$" << PreMontoMensual << endl <<endl;
         }
     }
     else if (MontoSolicitado >= 150000 && CantidadAnos <= 5)
     {
         tasa = 6.2;

         InteresMensual = (tasa / 100) * MontoSolicitado / 12;
         PreMontoMensual = MontoSolicitado / CantidadMeses + InteresMensual;

         cout << "\nMonto Mensual año 1 : RD$" << PreMontoMensual << endl << endl;

         for(int i = 1; i < CantidadAnos; ++i)
         {
             tasa = 2;
             PreMontoMensual = PreMontoMensual * ((CantidadAnos - i) * 12);
             InteresMensual = (tasa / 100) * PreMontoMensual / 12;
             PreMontoMensual = PreMontoMensual / ((CantidadAnos - i) * 12) + InteresMensual;
             cout << "Monto Mensual año " << i + 1 << " : RD$" << PreMontoMensual << endl <<endl;
         }
     }
     if (CantidadAnos >= 6)
     {
         tasa = 18.5;

         InteresMensual = (tasa / 100) * MontoSolicitado / 12;
         PreMontoMensual = MontoSolicitado / CantidadMeses + InteresMensual;

         cout << "\nMonto Mensual : RD$" << PreMontoMensual << endl << endl;

     }
     cout << endl;
     system ("pause");
     system ("CLS");
    }
    while(true);
     return 0;
 }
