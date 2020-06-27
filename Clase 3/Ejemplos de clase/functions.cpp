#include <iostream>

using namespace std;

int esPrimo(int N);

int main()
{

    int M;
    cout << "Ingrese el número hasta el cual desea encontrar los primos." << endl;

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        if (esPrimo(i))
        {
            cout << i << " es primo." << endl;
        }
    }
    return 0;
}

int esPrimo(int N)
{
    for (int i = 0; i < N; i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
#include <cmath>
#include <stdexcept>

using namespace std;

float areaDelNucleo(float potencia, float rendimiento, string regimen, int frecuencia, string material);

int main()
{
    float area_nucleo;
    float potencia, rendimiento;
    int frecuencia;
    string material, regimen;

    cout << "Ingrese la potencia: ";
    cin >> potencia;

    cout << "Ingrese la frecuencia: ";
    cin >> frecuencia;

    cout << "Ingrese el rendimiento: ";
    cin >> rendimiento;

    cout << "Ingrese el material (acero - acsi)";
    cin >> material;

    cout << "Ingrese el regimen (continuo - intermitente)";
    cin >> regimen;
    try
    {
        area_nucleo = areaDelNucleo(potencia, rendimiento, regimen, frecuencia, material);
        cout << area_nucleo << endl;
    }
    catch (exception &e)
    {
        cout << "Error! " << e.what() << endl;
    }
    
    return 0;
}

float areaDelNucleo(float potencia, float rendimiento, string regimen, int frecuencia, string material)
{

    float potencia_primario = potencia / rendimiento;
    float densidad_corriente, bmax;

    if (regimen != "continuo" && regimen != "intermitente")
    {
        throw invalid_argument("El regimen es inexistente");
    }

    if (regimen == "continuo")
        densidad_corriente = 2.;
    else
        densidad_corriente = 4.;

    if (material == "acero")
        bmax = 8.;
    else if (material == "acsi")
        bmax = 10.;
    else
        bmax = 12.;

    return 36.42 * sqrt(potencia / (densidad_corriente * frecuencia * bmax));
}