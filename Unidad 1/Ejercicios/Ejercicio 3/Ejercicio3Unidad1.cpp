#include <iostream>//Introduccion por teclado y muestreo por pantalla de nombre y edad//

using namespace std;

int main (int argc, char** argv)
{
    char Nombre[30];
    int Edad;
    char n = 164;
    cout << "INTRODUCE LOS SIGUIENTES DATOS"
         << endl << endl << endl;
    cout << "Nombre : ";
    cin.getline(Nombre,30);
    cout << "Edad : ";
    cin  >> Edad;
    cin.ignore();

    cout << "\n\nHola " << Nombre << ", usted tiene " << Edad <<" a" << n <<"os.";

    return 0;
}
