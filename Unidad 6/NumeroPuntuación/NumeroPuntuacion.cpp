#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

double *creaArreglo(int);
void ordena(double *, int);
double calculaPromedio(double *, int);

int *arreglo;

int main(int argc, char** argv)
{
    system("color f1");
    setlocale(LC_ALL, "");

    double * captura;
    double cantidad;

    gotoxy(30,2);printf("PUNTUACIONES\n\n");

    cout << "Cantidad de elementos : ";
    cin  >> cantidad;
    cout << endl;
    captura = creaArreglo(cantidad);
    ordena(captura, cantidad);
    cout << endl;

    cout << "\nPromedio : " << calculaPromedio(captura, cantidad) << endl;

    cout << endl;
    system ("pause");

    return 0;
}

double *creaArreglo(int cantidad)
{
    double *arreglo;
    arreglo = new double[cantidad];

    for(int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". Puntuación : ";
        cin  >> arreglo[i];
    }

    return arreglo;

    delete arreglo;
}

void ordena(double *arreglo, int cantidad)
{
    bool swap;
    int temp;

     do
     {
         swap = false;
         for (int indice = 0; indice < (cantidad - 1); indice++)
         {
             if (arreglo[indice] > arreglo[indice + 1])
            {
                 temp = arreglo[indice];
                 arreglo[indice] = arreglo[indice + 1];
                 arreglo[indice + 1] = temp;
                 swap = true;
            }
         }
     } while (swap);

     cout << "\n\nPuntuaciones ordnadas ascendentemente : \n\n";

     for(int i = 0; i < cantidad; i++)
     {
         cout << 1 + i << ". " << arreglo[i] << endl;
     }
}

double calculaPromedio(double *arreglo, int cantidad)
{
    double suma = 0;

    for(int i = 0; i < cantidad; i++)
    {
       suma += arreglo[i];
    }

    return suma / cantidad;
}
