#include <iostream>

using namespace std;
//Debug
int main()
{
    int a,b;
    cout << "Ingrese dos valores:" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << "El numero  " << a << " es mayor" << endl;
    }
    if (a < b)
    {
        cout << "El numero  " << b << " es mayor" << endl;
    }
    if (a == b)
    {
        cout << "Los numeros son iguales." << endl;
    }
    return 0;
}
