#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese dos valores:" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << "El numero  " << a << " es mayor" << endl;
    }
    else
    {
        if (a < b)
        {
            cout << "El numero  " << b << " es mayor" << endl;
        }
        else
        {
            cout << "Los numeros son iguales." << endl;
        }

    }
    return 0;
}
