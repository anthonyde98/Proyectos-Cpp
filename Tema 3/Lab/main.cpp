#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
 {
     float MontoSolicitado;
     float CantidadAnos;
     float CantidadMeses;
     float InteresMensual;
     float PreMontoMensual;
     float tasa;

     system ("color F1");
     do
     {
         cout << "Banco BONANZA" << endl << endl << "*Plazo minimo 3 anos.*\n*Plazo maximo 10 anos.*" << endl << endl;
         cout << "\nPrestamo a solicitar : ";
         cin  >> MontoSolicitado;
         cout << "Plazo a pagar el prestamo : ";
         cin  >> CantidadAnos;
     }
     while(CantidadAnos < 3 || CantidadAnos > 10);

     CantidadMeses = CantidadAnos * 12;

     if (MontoSolicitado < 150000)
     {
         if (CantidadAnos >= 6)
            break;

         tasa = 6.8;

         InteresMensual = (tasa / 100) * MontoSolicitado / 12;
         PreMontoMensual = MontoSolicitado / CantidadMeses + InteresMensual;

         cout << "\nMonto Mensual ano 1: " << PreMontoMensual << endl;

         for(int i = 1; i < CantidadAnos; ++i)
         {
             tasa = 2;
             PreMontoMensual = PreMontoMensual * ((CantidadAnos - i) * 12);
             InteresMensual = (tasa / 100) * PreMontoMensual / 12;
             PreMontoMensual = PreMontoMensual / ((CantidadAnos - i) * 12) + InteresMensual;
             cout << "Monto Mensual ano " << i + 1 << " :" << PreMontoMensual << endl;
         }
     }
     else
     {
         if (CantidadAnos >= 6)
            break;

         tasa = 6.2;

         InteresMensual = (tasa / 100) * MontoSolicitado / 12;
         PreMontoMensual = MontoSolicitado / CantidadMeses + InteresMensual;

         cout << "\nMonto Mensual ano 1: " << PreMontoMensual << endl;

         for(int i = 1; i < CantidadAnos; ++i)
         {
             tasa = 2;
             PreMontoMensual = PreMontoMensual * ((CantidadAnos - i) * 12);
             InteresMensual = (tasa / 100) * PreMontoMensual / 12;
             PreMontoMensual = PreMontoMensual / ((CantidadAnos - i) * 12) + InteresMensual;
             cout << "Monto Mensual ano " << i + 1 << " :" << PreMontoMensual << endl;
         }
     }
     if (CantidadAnos >= 6)
     {
         tasa = 18.5;

         InteresMensual = (tasa / 100) * MontoSolicitado / 12;
         PreMontoMensual = MontoSolicitado / CantidadMeses + InteresMensual;

         cout << "\nMonto Mensual : " << PreMontoMensual << endl;

     }

     system ("color F1");
     return 0;
 }
