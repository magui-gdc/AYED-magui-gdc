#include <iostream>

using namespace std;

int main()
{
	int nro;
	do {
		cout << "Ingrese en un número: ";
		cin >> nro;
		cout << nro << " es " << (nro >= 0 ? "Positivo" : "Negativo") << endl;
	} while(nro != 0);

	//Variante b, conviene pasar a while
	cout << endl << "== Variante b ===" << endl << endl;
	cout << "Ingrese en un número: ";
	cin >> nro;
	while(nro != 0) {
		cout << nro << " es " << (nro > 0 ? "Positivo" : "Negativo") << endl;
		cout << "Ingrese en un número: ";
		cin >> nro;
	}
	return 0;
}
