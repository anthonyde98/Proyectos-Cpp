#include <iostream>
#include <windows.h>
#include <iomanip>
#include <vector>
#include <cstring>

using namespace std;

struct data
{
    string nombreBebida;
    double precioBebida;
    int cantidadEnMaquina;
};

int main(int argc, char** argv)
{
    vector<data> maquina;
    data temp;
    char salir;
   int numero;
    double monto = 0;
    double dinero;
    double montoTotal = 0;

    system("color F1");

    for(int i = 0; i < 5; i++)
        {
            if (i == 0)
            {
                temp.nombreBebida = "Botella de Agua";
                temp.precioBebida = 20.00;
                temp.cantidadEnMaquina = 20;
                maquina.push_back(temp);
            }
            if (i == 1)
            {
                temp.nombreBebida = "Coca Cola";
                temp.precioBebida = 25.00;
                temp.cantidadEnMaquina = 20;
                maquina.push_back(temp);
            }
            if (i == 2)
            {
                temp.nombreBebida = "Seven Up";
                temp.precioBebida = 25.00;
                temp.cantidadEnMaquina = 20;
                maquina.push_back(temp);
            }
            if (i == 3)
            {
                temp.nombreBebida = "Montain Dew";
                temp.precioBebida = 30.00;
                temp.cantidadEnMaquina = 20;
                maquina.push_back(temp);
            }
            if (i == 4)
            {
                temp.nombreBebida = "Jugo V8";
                temp.precioBebida = 50.00;
                temp.cantidadEnMaquina = 20;
                maquina.push_back(temp);
            }
        }

    do
    {
            cout << "\n\nMaquina Espendedora de Bebidas" << endl << endl
                     << "Lista de Bebidas Disponibles: " << endl << endl;

                cout << "Nombre de la Bebida" << setw(18) << "Costo" << setw(29) << "Cantidad en Maquina\n";
                for (int i = 0; i < 5; i++)
                {
                    cout << "(" << i << "). " << setw(28) << left << maquina.at(i).nombreBebida
                         << setw(16) << left << maquina.at(i).precioBebida
                         << setw(6) << right << maquina.at(i).cantidadEnMaquina
                         << endl;
                }

              cout << "\nPara Salir del Programa Escribir '*', si quiere continuar presione otra tecla: ";
              cin  >> salir;

              if (salir == '*')
              {
                 cout << "\n************************************************************";
                 cout << "\n\nMonto Total que la maquina ha ganado : " << montoTotal << endl << endl;
                 cout << "************************************************************\n\n";
                 break;
              }

              cin.ignore();
              cout << "\nIntroducir el numero asignado a la bebida : ";
              cin  >> numero;

                  switch(numero)
                {
                    case 0:

                        if (maquina.at(numero).cantidadEnMaquina == 0) {
                              cout << "\nEsta Bebida se ha agotado porfavor seleccione otra";
                              cout << "\n----------------------------------------------------------------------\n";
                              goto one;
                                break;
                          }
                          cout << "Introducir Monto : ";
                          cin  >> dinero;
                          if(dinero < maquina.at(numero).precioBebida) {
                                cout << "Monto Menor al Precio de la Bebida." << endl;
                                cout << "\n----------------------------------------------------------------------\n";
                                goto one;
                                break;
                          }

                          monto = maquina.at(numero).precioBebida;
                          cout << "Cambio : " << dinero - maquina.at(numero).precioBebida << endl;
                          cout << "            **Desplegando una " << maquina.at(numero).nombreBebida << endl;
                          cout << "\n----------------------------------------------------------------------\n";
                          --maquina.at(numero).cantidadEnMaquina;

                        break;

                    case 1:

                        if (maquina.at(numero).cantidadEnMaquina == 0) {
                              cout << "\nEsta Bebida se ha agotado porfavor seleccione otra";
                              cout << "\n----------------------------------------------------------------------\n";
                              goto one;
                                break;
                          }
                          cout << "Introducir Monto : ";
                          cin  >> dinero;
                          if(dinero < maquina.at(numero).precioBebida) {
                                cout << "Monto Menor al Precio de la Bebida." << endl;
                                cout << "\n----------------------------------------------------------------------\n";
                                goto one;
                                break;
                          }

                          monto = maquina.at(numero).precioBebida;
                          cout << "Cambio : " << dinero - maquina.at(numero).precioBebida << endl;
                          cout << "            **Desplegando una " << maquina.at(numero).nombreBebida << endl;
                          cout << "\n----------------------------------------------------------------------\n";
                          --maquina.at(numero).cantidadEnMaquina;

                        break;

                    case 2:

                        if (maquina.at(numero).cantidadEnMaquina == 0) {
                              cout << "\nEsta Bebida se ha agotado porfavor seleccione otra";
                              cout << "\n----------------------------------------------------------------------\n";
                              goto one;
                                break;
                          }
                          cout << "Introducir Monto : ";
                          cin  >> dinero;
                          if(dinero < maquina.at(numero).precioBebida) {
                                cout << "Monto Menor al Precio de la Bebida." << endl;
                                cout << "\n----------------------------------------------------------------------\n";
                                goto one;
                                break;
                          }

                          monto = maquina.at(numero).precioBebida;
                          cout << "Cambio : " << dinero - maquina.at(numero).precioBebida << endl;
                          cout << "            **Desplegando una " << maquina.at(numero).nombreBebida << endl;
                          cout << "\n----------------------------------------------------------------------\n";
                          --maquina.at(numero).cantidadEnMaquina;

                        break;

                    case 3:

                        if (maquina.at(numero).cantidadEnMaquina == 0) {
                              cout << "\nEsta Bebida se ha agotado porfavor seleccione otra";
                              cout << "\n----------------------------------------------------------------------\n";
                              goto one;
                                break;
                          }
                          cout << "Introducir Monto : ";
                          cin  >> dinero;
                          if(dinero < maquina.at(numero).precioBebida) {
                                cout << "Monto Menor al Precio de la Bebida." << endl;
                                cout << "\n----------------------------------------------------------------------\n";
                                goto one;
                                break;
                          }

                          monto = maquina.at(numero).precioBebida;
                          cout << "Cambio : " << dinero - maquina.at(numero).precioBebida << endl;
                          cout << "            **Desplegando una " << maquina.at(numero).nombreBebida << endl;
                          cout << "\n----------------------------------------------------------------------\n";
                          --maquina.at(numero).cantidadEnMaquina;

                        break;

                    case 4:

                        if (maquina.at(numero).cantidadEnMaquina == 0) {
                              cout << "\nEsta Bebida se ha agotado porfavor seleccione otra";
                              cout << "\n----------------------------------------------------------------------\n";
                              goto one;
                                break;
                          }
                          cout << "Introducir Monto : ";
                          cin  >> dinero;
                          if(dinero < maquina.at(numero).precioBebida) {
                                cout << "Monto Menor al Precio de la Bebida." << endl;
                                cout << "\n----------------------------------------------------------------------\n";
                                goto one;
                                break;
                          }

                          monto = maquina.at(numero).precioBebida;
                          cout << "Cambio : " << dinero - maquina.at(numero).precioBebida << endl;
                          cout << "            **Desplegando un " << maquina.at(numero).nombreBebida << endl;
                          cout << "\n----------------------------------------------------------------------\n";
                          --maquina.at(numero).cantidadEnMaquina;

                        break;

                        default :
                            cout << "\nEste numero no se presenta en el menu.\n\n Ingrese un numero valido que este en el menu.\n\n";
                            cout << "\n-----------------------------------------------------------------------\n";
                            goto one;
                            break;
              }

            montoTotal = monto + montoTotal;

    one: if (salir == '*') break;

    }while(true);

    return 0;
}
