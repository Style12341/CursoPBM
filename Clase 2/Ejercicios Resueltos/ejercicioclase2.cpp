#include <iostream>

using namespace std;
int main()
{
    int N;

    cout << "Ingrese el numero" << endl;
    cin >> N;

    int suma = 0;
    float fact = 1;

    for (int f = 1; f <= N; f++)
    {
        suma = suma + f;
        fact *= f;
    }
    cout << "La suma entre 1 y " << N << " es " << suma << endl;

    cout << "Y su factorial es " << fact << endl;

    return 0;
}