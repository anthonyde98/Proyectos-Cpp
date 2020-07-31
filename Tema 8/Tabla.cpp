#include <iostream>
#include <iomanip>

using namespace std;

void cuadrof(int largo=1, int ancho=20, int move=0, int move1=0)//cuadro fino.
{
	//se mueve hacia abajo dejando la cantidad de espacios que especifique el usuario.
	for(int i=0; i<move1; i++)
	{
		cout << setw (5) << " " << endl;
	}
	
	cout << setw (move) << "\332";
	for(int k=0; k<ancho; k++)
	{
		cout << setw(1) << "\304";
	}
	
	cout << "\277\n";
	for(int i=0; i<largo; i++)
	{
		cout << setw (move) << "\263" << setw(ancho+1) << "\263" << endl;
	}
	
	cout << setw (move);
	cout << "\300";
	for(int j=0; j<ancho; j++)
	{
		cout << "\304";
	}
	cout << "\331" << endl;
}


int main()
{
	//ejemplos con diferentes cuadros.
	cuadrof(2);//el número de filas aumenta a 2, los demás datos se colocan por defecto.
	cuadrof(2,2);//el número de filas es 2 y las columnas son 2 (por defecto son 20), los demás datos se mantienen por defecto.
	cuadrof(2,2,2);//el número de filas es 2 las columnas 2 y se mueve 1 espacio a la derecha, los demáas datos se mantiene por defecto.
	cuadrof(2,2,2,2);//el número de filas es 2, las columnas  2, se mueve 1 espacio a la derecha y se mueve 2 espacios hacía abajo.
	return 0;
}
