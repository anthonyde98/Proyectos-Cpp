#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
    string respuesta = "si";

    system ("color F1");

    do
    {
        system ("CLS");

        if (respuesta != "si" && respuesta != "no")
        {
            cout << "'" << respuesta << "' no es una respuesta correcta.\n\nIntentelo otra vez.";

            Sleep(5000);
            system ("CLS");
        }

        cout << "\n\n¿Esta usted en la materia INF-511? 'si' o 'no' : ";
        cin  >> respuesta;
    }
    while (respuesta != "si" && respuesta != "no");

    cout << endl << "'" << respuesta << "' esta respuesta es correcta." << endl << endl;

    system ("pause");
    return 0;
}
