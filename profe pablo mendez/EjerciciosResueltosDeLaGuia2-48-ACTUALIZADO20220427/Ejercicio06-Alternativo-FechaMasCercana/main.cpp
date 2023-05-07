#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int fecha1, fecha2, fecha_actual;

    cout << "Ingrese la fecha 1" << endl;
    cin >> fecha1;
    cout << "Ingrese la fecha 2" << endl;
    cin >> fecha2;
    cout << "Ingrese la fecha actual" << endl;
    cin >> fecha_actual;
    if (abs(fecha1-fecha_actual) == abs(fecha2 - fecha_actual))
    {
        cout << "Las fechas son igual de recientes" << endl;
    }
    else
    {
        if (abs(fecha1-fecha_actual) < abs(fecha2 - fecha_actual))
        {
            cout << "Fecha 1 = " << fecha1 << " es más reciente" << endl;
        }
        else
        {
            cout << "Fecha 2 = " << fecha2 << " es más reciente" << endl;
        }
    }
    return 0;
}
