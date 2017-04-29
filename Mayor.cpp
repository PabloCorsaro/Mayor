/*
Programa para comparar que uero es mayor
Pablo Corsaro
28-04-2017
*/
#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cout << "ingresa dos numeros: " << endl;
    cin >> a >> b;

    if(a>b)
    {
        cout << a << " es mayor que " << b << "." << endl;
    }
    else
    {
        cout << b << " es mayor que " << a << "." << endl;
    }

    return 0;
}
