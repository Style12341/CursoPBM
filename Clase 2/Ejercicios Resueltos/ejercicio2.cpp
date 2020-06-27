#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Ingrese un caracter" << endl;
    cin >> c ;
    if ('a' <= c && c <= 'z')
    {
        cout << "El caracter es una minuscula" << endl;
    }
    else if ('0' <= c && c <= '9')
    {
        cout << "El carácter es un numero" << endl;
    }
    else if ('A' <= c && c <= 'Z')
    {
        cout << "El carácter es una  mayuscula" << endl;
    }
    else
    {
        cout << "El caracter es algo turbio" << endl;
    }

    return 0;
}