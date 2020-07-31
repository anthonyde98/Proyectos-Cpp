#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
    string nombre;
    string::iterator iterador;

    system ("color F1");

    cout << "Introduzca su nombre y apellido: ";
    getline(cin, nombre);

    iterador = nombre.begin();

    while(iterador != nombre.end())
    {
        cout << endl << *iterador;
        ++iterador;
    };

    cout << endl << endl;
    system ("pause");
    return 0;
}
