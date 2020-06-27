#include <iostream>
using namespace std;
int main()
{
    int it;
    double pi = 0;
    cout << "Inserte Numero de iteraciones" << endl;
    cin >> it ;
    for (int i = 0; i < it; i++)
    {
        if (i % 2 == 0)
        {
            pi -= 1.0 / (2 * i + 1);
        }
        else
        {
            pi += 1.0 / (2 * i + 1);
        }
    }
    cout << "El valor de Pi es igual a "<< pi * -4 << endl;
    return 0;
}