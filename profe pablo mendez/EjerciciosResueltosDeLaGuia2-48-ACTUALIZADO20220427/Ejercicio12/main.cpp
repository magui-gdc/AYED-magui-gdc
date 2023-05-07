#include <iostream>

using namespace std;

int main()
{
    int sumatoria = 0;
    for (int cont=1; cont <= 100; cont++)
    {
        sumatoria = sumatoria + cont;
        cout << "Numero: " << cont << "- Sumatoria(" << cont << ")=" << sumatoria << endl;

    }

    return 0;
}
