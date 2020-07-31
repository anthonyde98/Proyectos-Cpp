#include <iostream>
#include <windows.h>
#include <locale.h>
#include <iomanip>

using namespace std;

struct Estudiante
{
    string Matricula;
    string Nombre;
    float Calificacion;
};

int main(int argc, char** argv)
{
    const int tamano = 5;
    Estudiante Estudiantes[tamano];
    char salir;
    system("color f1");
    setlocale(LC_ALL, "");


    cout << left << setw(35) << "\n" << "REGISTRO DE ESTUDIANTES";
    Sleep(5000);

    do
    {
        system ("cls");

        for(int E = 0; E < tamano; E++)
        {
            cout << "\nEstudiante " << E + 1;

            cout << "\n\nMatricula          : ";
            cin  >> Estudiantes[E].Matricula;

            cin.ignore();

            cout << "Nombre y apellido  : ";
            getline(cin, Estudiantes[E].Nombre);

            cout << "Calificacion Final : ";
            cin  >> Estudiantes[E].Calificacion;
        }

        cout << endl;

        cout << "---------------------------------------------------------------------------------------------------";

        cout << left << setw(24) << "\n   Matricula" << left << setw(23) <<  "Nombre y apellido" << left << setw(19) << "Calificación" << "Estado";

        cout << endl;

        for(int i = 0; i < tamano; i++)
        {
            cout << endl;
            cout << i + 1;
            cout << ". ";
            cout << left << setw(20) << Estudiantes[i].Matricula;

            cout << left << setw(27) << Estudiantes[i].Nombre;

            cout << left << setw(15) << Estudiantes[i].Calificacion;

            if(Estudiantes[i].Calificacion >= 70)
                    cout << left << setw(15) << "Promovido";
                else
                    cout << left << setw(15) << "Reprobado";
        }

        cout << "\n\n¿Salir? (s) | (n) : ";
        cin  >> salir;

    }
    while(tolower(salir) != 's');

    return 0;
}
