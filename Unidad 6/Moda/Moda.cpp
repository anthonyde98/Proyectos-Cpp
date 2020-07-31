#include <conio.h>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int modaArreglo(int *, int);

int Moda;

int main(int argc, char** argv)
{
    srand(time(0));
    int cantidad = rand() % 10 + 1;
    int * arreglo = new int[cantidad];

    int captura;

    system("color f1");
    setlocale(LC_ALL, "");

   cout << "Arreglo al azar \n\n";

    for (int i = 0; i < cantidad; i++)
    {
        *(arreglo + i) = rand() % 5 + 1;
        cout << i + 1 << ". " << *(arreglo + i) << endl;
    }

    captura = modaArreglo(arreglo, cantidad);

    cout << "\nLa moda es : " << captura << endl << endl;

    system ("pause");

    delete arreglo;

    return 0;
}

int modaArreglo(int *arreglo, int cantidad)
{
	int moda = -1;
	int veces = 0;
	int ultimo_numero_veces = 0;

	for(int i = 0; i < cantidad; i++)
        {
            int j = i + 1;

            while(j < cantidad)
            {
                if(arreglo[i] == arreglo[j])
                {
                    veces++;
                }

                j++;
            }

            if(veces > ultimo_numero_veces)
            {
                moda = arreglo[i];
                ultimo_numero_veces = veces;
                veces = 0;
            }
            else
            {
               veces = 0;
            }
        }

	return moda;
}


