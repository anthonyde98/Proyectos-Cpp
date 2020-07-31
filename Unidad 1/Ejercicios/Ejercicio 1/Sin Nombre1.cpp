#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    system("color  f9");

    int N1 = -1;
    int N2 = 1;
    int F;

    gotoxy(30,2); printf("SECUENCIA DE FIBONACCI\n\n");
    etiqueta_1: F = N1 + N2;
    cout << F << endl;
    N1 = N2;
    N2 = F;
    if (F==13)
    {
        return 0;
    }
    goto etiqueta_1;
    cin.get();
}
