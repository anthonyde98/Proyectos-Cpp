#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

long fibonacci(long);
int cantidad;
int entrada;
int terminoBuscado(entrada);

int main(int argc, char** argv)
{
    system("color f9");
    system("color f1");
    setlocale(LC_ALL, "");

    long cantidad;
    char salir;
    do
    {
        gotoxy(30,2);printf("SECUENCIA DE FIBONACCI\n\n");

        cout << "Termino e-nesimo a buscar : " ;
        cin >> entrada;

        terminoBuscado = entrada;

        cout << "\nTermino e-nesimo : " << terminoBuscado;
        cantidad = fibonacci((long)terminoBuscado);

        cout << "\nCantidad : " << cantidad << endl;
        cout << endl;

        cout << "\n\n¿Salir? (s) | (n) : ";
        cin  >> salir;
        system ("cls");
    }
    while(tolower(salir) != 's');

    return 0;
}

long fibonacci(long)
{
    long termino = (long)terminoBuscado;

    long N1 = -1;
    long N2 = 1;
    long F;

    for(int i = 0; i < termino; i++)
    {
        F = N1 + N2;
        N1 = N2;
        N2 = F;
    }

    return F;

}
