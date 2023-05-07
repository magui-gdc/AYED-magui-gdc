#include <iostream>

using namespace std;

int main()
{
	const double mmxpul = 25.4;
	cout << "Ingrese un valor en mm: ";
	double mm;
	cin >> mm;
	cout << mm << "mm equivalen a " << mm / mmxpul << "\"" << endl;
	return 0;
}
