#include <iostream>
#include <windows.h>
#include <locale.h>
#include <iomanip>

using namespace std;

struct Empleado
{
    string NombreApellido;
    float HorasTrabajadas;
    float HorasExtras;
    float PagoHora;
    float PagoHoraExtra;
    float Seguro;
    float TotalSinHorasExtras;
    float TotalHorasExtras;
    float SueldoBruto;
    float SueldoNeto;
};

int main(int argc, char** argv)
{
    const int tamano = 3;
    Empleado Empleados[tamano];
    char salir;

    system("color f1");
    setlocale(LC_ALL, "");


    cout << left << setw(35) << "\n" << "NOMINA DE EMPLEADOS";
    Sleep(2000);

    do
    {
        system ("cls");

        for(int E = 0; E < tamano; E++)
        {
            cout << "\nEmpleado " << E + 1;

            cout << "\n\nNombre y apellido : ";
            getline(cin, Empleados[E].NombreApellido);

            cout << "Horas Trabajadas  : ";
            cin  >> Empleados[E].HorasTrabajadas;

            cin.ignore();
        }

        for(int E = 0; E < tamano; E++)
        {
            if(Empleados[E].HorasTrabajadas <= 45)
            {
                Empleados[E].PagoHora = 73.50;
                Empleados[E].PagoHoraExtra = 0;
                Empleados[E].HorasExtras = Empleados[E].HorasTrabajadas - 45;
                Empleados[E].TotalSinHorasExtras = Empleados[E].PagoHora * 45;
                Empleados[E].Seguro = Empleados[E].TotalSinHorasExtras * 0.02;
                Empleados[E].TotalHorasExtras = Empleados[E].PagoHoraExtra * Empleados[E].HorasExtras;
                Empleados[E].SueldoBruto = Empleados[E].TotalSinHorasExtras + Empleados[E].TotalHorasExtras;
                Empleados[E].SueldoNeto = Empleados[E].SueldoBruto -  Empleados[E].Seguro;

            }
            if(Empleados[E].HorasTrabajadas >= 46 && Empleados[E].HorasTrabajadas < 90)
            {
                Empleados[E].PagoHora = 73.50;
                Empleados[E].PagoHoraExtra = 98.25;
                Empleados[E].HorasExtras = Empleados[E].HorasTrabajadas - 45;
                Empleados[E].TotalSinHorasExtras = Empleados[E].PagoHora * 45;
                Empleados[E].Seguro = Empleados[E].TotalSinHorasExtras * 0.02;
                Empleados[E].TotalHorasExtras = Empleados[E].PagoHoraExtra * Empleados[E].HorasExtras;
                Empleados[E].SueldoBruto = Empleados[E].TotalSinHorasExtras + Empleados[E].TotalHorasExtras;
                Empleados[E].SueldoNeto = Empleados[E].SueldoBruto -  Empleados[E].Seguro;

            }
            if(Empleados[E].HorasTrabajadas >= 90)
            {
                Empleados[E].PagoHora = 73.50;
                Empleados[E].PagoHoraExtra = 122.80;
                Empleados[E].HorasExtras = Empleados[E].HorasTrabajadas - 45;
                Empleados[E].TotalSinHorasExtras = Empleados[E].PagoHora * 45;
                Empleados[E].Seguro = Empleados[E].TotalSinHorasExtras * 0.02;
                Empleados[E].TotalHorasExtras = Empleados[E].PagoHoraExtra * Empleados[E].HorasExtras;
                Empleados[E].SueldoBruto = Empleados[E].TotalSinHorasExtras + Empleados[E].TotalHorasExtras;
                Empleados[E].SueldoNeto = Empleados[E].SueldoBruto -  Empleados[E].Seguro;

            }
        }



        cout << endl;

        cout << "------------------------------------------------------------------------------------------------------------------------";

        cout << endl;

        cout << left << setw(21) << "\nNombre y apellido" << left << setw(20) <<  "Horas Normales" << left << setw(17) << "Horas Extras"
        << left << setw(23) << "Monto Horas Extras" << left << setw(12) << "Descuento" << left << setw(15) << "Sueldo Bruto" << "Sueldo Neto";

        cout << endl;

        for(int i = 0; i < tamano; i++)
        {
            cout << endl;
            cout << i + 1;
            cout << ". ";
            cout << left << setw(23) << Empleados[i].NombreApellido;

            cout << left << setw(18) << Empleados[i].HorasTrabajadas - Empleados[i].HorasExtras;

            cout << left << setw(20) << Empleados[i].HorasExtras;

            cout << left << setw(18) << Empleados[i].TotalHorasExtras;

            cout << left << setw(13) << Empleados[i].Seguro;

            cout << left << setw(14) << Empleados[i].SueldoBruto;

            cout << Empleados[i].SueldoNeto;
        }

        cout << "\n\n¿Salir? (s) | (n) : ";
        cin  >> salir;

        cin.ignore();

    }
    while(tolower(salir) != 's');

    return 0;
}
