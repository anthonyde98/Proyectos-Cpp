#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    int operacion;
    float Numero1;
    float Numero2;
    float Descuento;
    float Resultado;
    char salir;

    system ("color F1");

    do
    {
        cout << "\nOPERACIONES\n";
        cout << "------------------------------------------------------------------";
        cout << "\n(1)SUMA\n(2)RESTA\n(3)MULTIPLICACION\n(4)DIVISION";
        cout << "\n(5)PROMEDIO\n(6)POTENCIA\n(7)RAIZ\n(8)DESCUENTO\n";
        cout << "------------------------------------------------------------------\n\n";
        cout << "*Para realizar una operacion ingresar el numero que indica en el menu.";
        cout << "\n\n**En la potencia ingresar la base primero y luego el exponente.\n  En la Raiz ingresar el radical primero y luego el indice.";
        cout << "\n\n***El Programa acepta un maximo de 10 numeros.";
        cout << "\n\n****Para finalizar una operacion con menos de 10 numeros ingrese '0.0' \n    despues de terminar de ingresar los numeros que vaya a utilizar.";
        cout << "\n\nPara salir presiona *, para continuar presionar otra tecla : ";
        cin  >> salir;

        if (salir == '*')
            break;

        cout << endl << endl;
        cout << "Operacion : ";
        cin  >> operacion;

        switch(operacion)
        {
            case 1:
                Resultado = 0;
                for(int i = 1; i <= 10; i++)
                {
                    cout << "\ningrese un Numero : ";
                    cin >> Numero1;
                    Resultado += Numero1;
                    if (Numero1 == 0.0)
                        goto one;
                }
                    one: cout << "\nResultado es : " << Resultado << endl;
                break;

            case 2:
                Resultado = 0;
                for(int i = 1; i <= 10; i++)
                {
                    cout << "\ningrese un Numero : ";
                    cin >> Numero1;
                    if (i == 1){
                        Resultado = Numero1;
                        Numero1 = 0;
                        goto resta;
                    }
                    if (Numero1 == 0.0){
                        goto two;
                    }

                    resta: Resultado -= Numero1;
                }
                    two: cout << "\nResultado es : " << Resultado << endl;
                    Numero1 = 0;
                break;

            case 3:
                Resultado = 1;
                for(int i = 1; i <= 10; i++)
                {
                    cout << "\ningrese un Numero : ";
                    cin >> Numero1;
                    if (Numero1 == 0)
                        Resultado = 0;
                    if (Numero1 == 0.0){
                        goto three;
                    }
                    Resultado *= Numero1;
                }
                    three: cout << "\nResultado es : " << Resultado << endl;
                break;

            case 4:
                for(int i = 1; i <= 10; i++)
                {
                    cout << "\nProcurar no utilizar el numero 0 en la divicion, \nya que como resultado da indefinido\n\n";
                    cout << "\ningrese un Numero : ";
                    cin >> Numero1;
                    if (i == 1){
                        Resultado = Numero1;
                        Numero1 = 1;
                        goto divicion;
                    }
                    if (Numero1 == 0.0)
                        goto four;

                    divicion: Resultado /= Numero1;
                }
                    four: cout << "\nResultado es : " << Resultado << endl;

                break;

            case 5:
                Resultado = 0;
                int i;
                for(i = 1; i <= 10; i++)
                {
                    cout << "\ningrese un Numero : ";
                    cin >> Numero1;
                    Resultado += Numero1;
                    if (Numero1 == 0.0)
                        goto five;
                }
                    five: cout << "\nResultado es : " << Resultado / (i-1) << endl;
                    Numero1 = 0;
                break;

            case 6:
                cout << "\nIngresar Base : ";
                cin >> Numero1;
                cout << "\nIngresar Exponente : ";
                cin >> Numero2;

                Resultado = pow(Numero1,Numero2);
                cout << "\nResultado es : " << Resultado << endl;
                Numero1 = 0;
                break;

            case 7:
                cout << "\nIngrese el Radical : ";
                cin >> Numero1;
                cout << "\nIngrese el Indice : ";
                cin >> Numero2;

                Resultado = pow(Numero1, 1 / Numero2);
                cout << "\nResultado es : " << Resultado << endl;
                Numero1 = 0;
                break;

            case 8:
                cout << "\nIngrese el Monto : ";
                cin >> Numero1;
                cout << "\nIngrese la Tasa de Descuento : ";
                cin >> Descuento;

                Resultado = Numero1 * (Descuento / 100);
                cout << "\nDescuento : " << Resultado << endl;
                cout << "\nMonto con Descuento : " << Numero1 - Resultado << endl << endl;
                Numero1 = 0;
                break;

            default :
                    cout << "\nEste numero no se presenta en el menu.\n\n Ingrese un numero valido que este en el menu.\n\n";
                    break;
        }
        cout << "\nSi quiere salir del programa poner *, si quiere continuar pulse otra tecla : " ;
        cin  >> salir;
        cout << "\n\n--------------------------------------------------------------------------------------------" << endl << endl;
        if (salir == '*') break;
    }
    while(true);
    return 0;
}
