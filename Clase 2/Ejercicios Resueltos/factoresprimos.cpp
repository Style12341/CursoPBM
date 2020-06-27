#include <iostream>

using namespace std;
int main()
{
    int num;

    cout << "Ingrese el numero" << endl;
    cin >> num;
    while (num > 1)
    {
        for (int f = 2; f <= num; f++)
        {
            if (num % f == 0)
            {
                cout << f << " es divisor de " << num << endl;
                num /= f;
                break;
            }
        }
    }
    return 0;
}