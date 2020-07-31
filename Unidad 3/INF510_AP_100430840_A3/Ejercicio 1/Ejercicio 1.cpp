#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
    string texto;
    string::iterator itedesde;
    string::iterator itehasta;
    int mayuscula = 0;
    int minuscula = 0;
    int digito = 0;
    int puntuacion = 0;
    int alfanumerico = 0;
    int tamano;

    system ("color F1");

  do{
    cout << "\nIntroduzca un texto: ";
    getline(cin, texto);

    itedesde = texto.begin();
    itehasta = texto.end();
    tamano = texto.length();

     while(itedesde != itehasta)
     {
         if (isupper(*itedesde))
            ++mayuscula;
         if (islower(*itedesde))
            ++minuscula;
         if (isdigit(*itedesde))
            ++digito;
         if (ispunct(*itedesde))
            ++puntuacion;
         if (isalnum(*itedesde))
            ++alfanumerico;
            ++itedesde;
     };
    cout << "\nCaracteres en mayuscula  : " << mayuscula;
    mayuscula = 0;
    cout << "\nCaracteres en minuscula  : " << minuscula;
    minuscula = 0;
    cout << "\nDigitos                  : " << digito;
    digito = 0;
    cout << "\nSignos de puntuacion     : " << puntuacion;
    puntuacion = 0;
    cout << "\nCaracteres alfanumericos : " << alfanumerico;
    alfanumerico = 0;

    cout << endl << endl;
    }
    while(true);
    system ("pause");
    return 0;
}
