#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Introduzca dos numeros:" << endl;

    cin >> a >> b;

    cout << "La suma es " << a + b << endl;

    cout << "La resta es " << a - b << endl;

    cout << "Su producto es " << a * b << endl;

    cout << "La division entera es " << a / b << " con resto " << a % b << endl;

    cout << "La division de punto flotante es " << a * 1. / b << endl;

    cout << "El caracter asosiaciado a el primer numero es: " << (char)a << endl;

    return 0;
}