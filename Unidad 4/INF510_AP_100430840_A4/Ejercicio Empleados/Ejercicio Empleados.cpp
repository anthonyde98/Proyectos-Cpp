#include <iostream>
#include <windows.h>
#include <iomanip>
#include <vector>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
    vector<long> empld;
    long ID;
    vector<int> horas;
    int horastrabajadas;
    vector<double> tarifaPorHora;
    double tarifa;
    vector<double> salarioBruto;
    double salario;

    char salir;
    int contador = 1;

    system("color F1");

    do
    {
        cout << "Codigos de Emleados: " << endl;

        for(int i = 0; i <= 6; i++)
        {
            switch(i)
            {
            case 0:
                ID = 5658845;
                empld.push_back(ID);
                cout << endl << "Empleado 1 : " << ID;
                break;
            case 1:
                ID = 4520125;
                empld.push_back(ID);
                cout << endl << "Empleado 2 : " << ID;
                break;
            case 2:
                ID = 7895122;
                empld.push_back(ID);
                cout << endl << "Empleado 3 : " << ID;
                break;
            case 3:
                ID = 8777541;
                empld.push_back(ID);
                cout << endl << "Empleado 4 : " << ID;
                break;
            case 4:
                ID = 8451277;
                empld.push_back(ID);
                cout << endl << "Empleado 5 : " << ID;
                break;
            case 5:
                ID = 1302850;
                empld.push_back(ID);
                cout << endl << "Empleado 6 : " << ID;
                break;
            case 6:
                ID = 7580489;
                empld.push_back(ID);
                cout << endl << "Empleado 7 : " << ID;
                break;
            }
        }

        cout << endl << endl;

        cout  << "---------------------------------------------------------------------------------\n";

        for(int i = 0; i <= 6; i++)
        {
            one: cout << "Introducir Horas Trabajadas por Empleado " << contador << " : ";
            cin  >> horastrabajadas;
            if(horastrabajadas < 0){
                goto one;
            }
            contador++;
            horas.push_back(horastrabajadas);
        }
            cout << endl;

            contador = 1;

        cout  << "---------------------------------------------------------------------------------\n";

        cout  << "---------------------------------------------------------------------------------\n";

        for(int i = 0; i <= 6; i++)
        {
            two: cout << "Introducir Tarifa por Hora de Empleado " << contador << " : ";
            cin  >> tarifa;
            if(tarifa < 50){
                goto two;
            }
            contador++;
            tarifaPorHora.push_back(tarifa);
        }
            cout << endl;

        cout  << "---------------------------------------------------------------------------------\n";

        for(int i = 0; i <= 6; i++)
        {
            salario = horas.at(i) * tarifaPorHora.at(i);
            salarioBruto.push_back(salario);
        }

        contador = 1;

        cout  << "---------------------------------------------------------------------------------\n";

        for(int i = 0; i <= 6; i++)
        {
            cout << "ID de Empleado " << contador << " : " << empld.at(i) << " Sueldo Bruto: " << salarioBruto.at(i) << endl;
            contador++;
        }

        cout  << "---------------------------------------------------------------------------------\n";

    cout << "\nPara salir introduzca un * (asterisco), si quiere continuar presione otra tecla : ";
    cin  >> salir;

    if (salir == '*') break;

    }
    while(true);
    return 0;
}
