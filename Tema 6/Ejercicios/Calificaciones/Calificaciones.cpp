#include <iostream>
#include <windows.h>
#include <locale.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    const int Estudiantes = 5;
    const int Parciales = 3;
    float Calificacion[Estudiantes][Parciales];
    string Nomenclatura[3] = {"1er Parcial", "2do Parcial", "Ex. Final"};
    string Nombre[5];
    float Nota[5];
    char salir;

    system("color f1");
    setlocale(LC_ALL, "");

    do
    {
        cout << "REGISTRO DE CALIFICACIONES";

        for(int E = 0; E < Estudiantes; E++)
        {
            cout << "\n\nNombre del estudiante " << E + 1 << " : " ;
            getline(cin, Nombre[E]);

            cout << endl;

            for(int P = 0; P < Parciales; P++)
            {
                cout << Nomenclatura[P] << " : ";
                cin  >> Calificacion[E][P];
            }
            Nota[E] = (Calificacion[E][0] + Calificacion[E][1] + Calificacion[E][2]) / 3;
            cin.ignore();
        }

        cout << left << setw(35) << "\nEstudiante" << left << setw(15) <<  Nomenclatura[0] << left << setw(15) << Nomenclatura[1] << left << setw(15) << Nomenclatura[2] << left << setw(15) << "Nota Final" << left << setw(15) << "Estado";
        for(int i = 0; i < Estudiantes; i++)
        {
            cout << endl;
            cout << left << setw(35) << Nombre[i];
            for(int j = 0; j < Parciales; j++)
            {
                cout << left << setw(15) << Calificacion[i][j];
            }

            cout << left << setw(15) << Nota[i];

            if(Nota[i] >= 70)
                    cout << left << setw(15) << "Promovido";
                else
                    cout << left << setw(15) << "Reprobado";
        }
        cout << "\n\n¿Desea continuar? Si (s) | No (n) : ";
        cin  >> salir;

        cout << endl;

        if(tolower(salir) != 'n')
        {
            system ("cls");
        }

        cin.ignore();
    }
    while(tolower(salir) != 'n');

    return 0;
}

