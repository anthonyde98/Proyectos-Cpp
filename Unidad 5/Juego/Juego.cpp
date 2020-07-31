#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <locale.h>

using namespace std;

void displayMenu();
char getComputerOption();
string checkOptions(char, char);
bool inputOK(char);
const char PIEDRA = 'P';
const char PAPEL = 'A';
const char TIJERA = 'T';
const char SALIR = 'S';
char valores[3] = {PIEDRA,PAPEL,TIJERA};
char entrada;
int main(int argc, char** argv)
{
    system("color f1");
    setlocale(LC_ALL, "");

    do
    {
        do
        {
            displayMenu();
            cin >> entrada;
            entrada = toupper(entrada);
            cout << endl;
        }
        while(inputOK(entrada));

            if (entrada == SALIR)
                break;
            cout << "Computador : " << getComputerOption();
            cout << "\nUsuario : " << entrada;

            cout << endl << endl;
            cout << "*** " << checkOptions(getComputerOption(), entrada) << " ***";
            cout << endl << endl;

    }
    while(true);

    return 0;
}

void displayMenu()
{
    cout << "\nP – Piedra\nA – Papel\nT – Tijera\nS – Salir\n\nOpcion : ";
}
char getComputerOption()
{
    int aleatorio;

    srand(time(0));
    aleatorio = valores[rand() % 3];
}
string checkOptions(char, char)
{
    if (entrada == getComputerOption())
            return "Empate!";
        else if
            (   (entrada == PIEDRA && getComputerOption() == TIJERA)
             || (entrada == TIJERA && getComputerOption() == PAPEL)
             || (entrada == PAPEL && getComputerOption() == PIEDRA)
            )
            return "Gano! :)";
        else
            return "Perdio! :)";
}
bool inputOK(char)
{
    if (entrada != PIEDRA && entrada != PAPEL && entrada != TIJERA && entrada != SALIR)
          return true;
    else
        return false;
}
