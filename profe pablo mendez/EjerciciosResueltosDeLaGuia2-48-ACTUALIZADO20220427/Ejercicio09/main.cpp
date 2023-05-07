#include <iostream>

using namespace std;

int main()
{
    int mm,aaaa;
    bool bisiesto = false;
    cout << "Ingrese mm y aaaa" << endl;
    cin >>  mm >> aaaa;
    if (
        ((aaaa%4==0) && (aaaa%100 != 0)) ||
        ( (aaaa%100==0) && (aaaa%400==0) )
    )
        bisiesto = true;
    switch (mm)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Tiene 31 dias" << endl;
            break;
        case 2:
            if (bisiesto==true)
                cout << "Tiene 29 dias" << endl;
            else
                cout << "Tiene 28 dias" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
           cout << "Tiene 30 dias" << endl;
           break;
        default:
            cout << "Mes incorrecto" << endl;
    }
    return 0;
}
