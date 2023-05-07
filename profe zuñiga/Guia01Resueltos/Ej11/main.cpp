#include <iostream>

using namespace std;

int main()
{
	const int base {16}; //UNICO CAMBIO!!!
	cout << "Ingrese el número: ";
	int nro;
	cin >> nro;
	int cifras = 0;
	int n = nro; //solo para no perder el valor en nro
	do {
		n /= base;
		++cifras;
	} while (n != 0);
	cout << nro << " tiene " << cifras << " cifras." << endl;
	return 0;
}
