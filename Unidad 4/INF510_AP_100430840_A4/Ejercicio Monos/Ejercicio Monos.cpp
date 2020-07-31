#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
    system ("color F1");

    const int RowMonos = 3;
    const int  ColDias = 7;
    float Alimentacion[RowMonos][ColDias];
    float Suma;
    float Suma1[7] = {0,0,0,0,0,0,0};
    float Promedio;
    int Mono = 1;
    int Dia = 1;
    int Mayor;
    int Menor;
    char salir;

    do
    {
        cout << "Ingrese la cantidad de comida diaria de cada mono en libras." << endl << endl;

        for(int Monos = 0; Monos < RowMonos; Monos++)
        {
            cout << "Mono Numero " << Mono << " : " << endl << endl;
            Mono++;

            for(int Dias = 0; Dias < ColDias; Dias++)
            {
                one: cout << "Dia " << Dia << " : ";
                cin  >> Alimentacion[Monos][Dias];
                if (Alimentacion[Monos][Dias] < 0)
                    goto one;
                Dia++;
            }

            cout << endl;
            Dia = 1;
        }

        cout << "-------------------------------------------------------------------\n";

        for(int Monos = 0; Monos < RowMonos; Monos++)
        {
            for(int Dias = 0; Dias < ColDias; Dias++)
            {
                Suma += Alimentacion[Monos][Dias];
            }
        }
        Promedio = Suma / 21;

        Suma = 0;
        for(int Monos = 0; Monos < RowMonos; Monos++)
        {
            for(int Dias = 0; Dias < ColDias; Dias++)
            {
                if (Dias == 0)
                Suma1[Dias] += Alimentacion[Monos][Dias];
                if (Dias == 1)
                Suma1[Dias] += Alimentacion[Monos][Dias];
                if (Dias == 2)
                Suma1[Dias] += Alimentacion[Monos][Dias];
                if (Dias == 3)
                Suma1[Dias] += Alimentacion[Monos][Dias];
                if (Dias == 4)
                Suma1[Dias] += Alimentacion[Monos][Dias];
                if (Dias == 5)
                Suma1[Dias] += Alimentacion[Monos][Dias];
                if (Dias == 6)
                Suma1[Dias] += Alimentacion[Monos][Dias];
            }
        }
        for(int i = 0; i < 7; i++)
        cout << "Cantidad de libras promedio ingerida en dia " << i + 1 << "             : " << Suma1[i] / 3 << endl;
        cout << endl;

        Mayor = Alimentacion[0][0];
        Menor = Alimentacion[0][0];

        for (int Mono = 0; Mono < RowMonos; Mono++)
        {
            for (int Dia = 0; Dia < ColDias; Dia++)
            {
                Mayor = (Alimentacion[Mono][Dia] > Mayor) ? Alimentacion[Mono][Dia] : Mayor;
                Menor = (Alimentacion[Mono][Dia] < Menor) ? Alimentacion[Mono][Dia] : Menor;
            }
        }
        cout << "Cantidad de libras promedio de comida ingerida por semana : " << Promedio << endl;
        cout << "Cantidad mayor de comida ingerida                         : " << Mayor << endl;
        cout << "Cantidad menor de comida ingerida                         : " << Menor << endl;
        cout << "\n-------------------------------------------------------------------\n";

        cout << "\nPara salir introduzca un * (asterisco), si quiere continuar presione otra tecla : ";
        cin  >> salir;

        if (salir == '*') break;
    }
    while(true);
    return 0;
}
