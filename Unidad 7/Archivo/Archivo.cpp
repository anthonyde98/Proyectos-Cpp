#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

void openfile(fstream &, string);

int main(int argc, char** argv)
{
    fstream filesetting;
    string linea;
    string nombre;

    int contador = 1;

    system("color f1");
    setlocale(LC_ALL, "");

    cout << "\nNombre del archivo y formato : ";
    getline(cin, nombre);

    cout << "\nAbriendo archivo " << nombre << "...\n\n";

    openfile(filesetting, nombre);

    if(filesetting.fail())
    {
        cout << "Error al abrir el archivo " << nombre << ".\nPuede que el archivo no exista.\n";
        goto etiqueta_1;
    }
    else
    {
        cout << "Leyendo el archivo " << nombre << "...\n\n";

        for(int i = 1; !filesetting.eof(); i++)
        {
            getline(filesetting, linea);
            cout << i << ": " << linea << endl;
            if(i == contador * 24)
            {
                getch();
                contador++;
            }
        }
    }

    cout << "\nCerrando archivo " << nombre << "...\n";

    etiqueta_1:

    filesetting.close();

    cout << "\nFin del programa.\n";

    system("pause");

    return 0;
}

void openfile(fstream &filesetting, string nombre)
{
    filesetting.open(nombre.c_str(), ios::in);
}
