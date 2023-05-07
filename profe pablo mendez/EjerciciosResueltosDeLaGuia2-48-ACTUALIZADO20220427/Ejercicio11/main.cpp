#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout << "Ingrese la edad" << endl;
    cin >> edad;
    if (edad<=12)
        cout << "Menor" << endl;
    else
    {
        if (edad <=18)
            cout << "Cadete" << endl;
        else
        {
            if (edad <=26)
                cout << "Juvenil" << endl;
            else
                cout << "Mayor" << endl;
        }
    }
    return 0;
}
