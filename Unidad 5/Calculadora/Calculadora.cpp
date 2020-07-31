#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

struct formato
{
    int numero1;
    char operador;
    int numero2;
    float resultado1;

    float resultado();
};

void imprimeResultado(formato);

int main(int argc, char** argv)
{
    formato operacion = {atoi(argv[1]),tolower(*argv[2]),atoi(argv[3])};
    imprimeResultado(operacion);
	return 0;
}

float formato::resultado()
{
    if(!(isdigit(numero1) && isdigit(numero2)))
    {
        switch(operador)
    {
        case '+' : resultado1 = numero1 + numero2 ; break;
        case '-' : resultado1 = numero1 - numero2 ; break;
        case 'x' : resultado1 = numero1 * numero2 ; break;
        case '/' : resultado1 = numero1 / numero2 ; break;
        case '%' : resultado1 = numero1 % numero2 ; break;
        case '^' : resultado1 = pow(numero1, numero2) ; break;
    }
    return resultado1;
    }
}

void imprimeResultado(formato r)
{
    cout << r.numero1 << " " << r.operador << " " << r.numero2 << " = " << r.resultado();
}
