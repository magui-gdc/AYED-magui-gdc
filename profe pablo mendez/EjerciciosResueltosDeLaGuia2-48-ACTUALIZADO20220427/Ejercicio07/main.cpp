#include <iostream>

using namespace std;

int main()
{
    int l1,l2,l3;
    cout << "Ingrese l1, l2 y l3: " << endl;
    cin >> l1 >> l2 >> l3;
    if ( (l1 + l2 > l3) && (l2 + l3 > l1) && (l1 + l3 > l2) )
        cout << "Los valores corresponden a un triángulo." << endl;

    else
        cout << "Los valores no corresponden a un triángulo." << endl;
    return 0;
}
