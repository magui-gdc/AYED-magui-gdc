#include <iostream>

using namespace std;

int main()
{
    int valor;
    cout << "Ingrese un valor:" << endl;
    cin >> valor;
    cout << "a) Quinta parte del valor: " << (float) valor/ 5 << endl;
    cout << "b) Resto de la división por 5: " << valor % 5 << endl;
    cout << "c) Séptima parte del punta a:" << (float) valor / 5 / 7 << endl;
    return 0;

}
