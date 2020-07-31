#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv)
{
    int kilometro = 50;
    float milla;

    system ("color F1");

    cout << "\n               VELOCIMETRO" << endl << endl;
    cout << "Kilometro por hora             Milla por hora" << endl << endl;

    for (int i = kilometro; kilometro < 150; i++)
    {
        kilometro+= 10;
        milla = kilometro *0.6214;
        cout << kilometro << "                             " << milla;
        cout << endl;
    }

    cout << endl;
    system ("pause");
    return 0;
}
