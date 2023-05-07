#include <iostream>

using namespace std;

int main()
{
	int l1, l2, l3;
	cout << "Ingrese las medidas de los 3 lados del triángulo: " << endl;
	cin >> l1 >> l2 >> l3;
	if (l1 == l2) { // Seguro NO ES escaleno
		if (l1 == l3) {
			cout << "Es Equilátero" << endl;
		} else {
			cout << "Es isósceles (l3 distinto)" << endl;
		}
	} else { //seguro no es equilátero
		if (l2 == l3) {
			cout << "Es isósceles (l1 distinto)" << endl;
		} else if (l1 == l3) {
			cout << "Es isósceles (l2 distinto)" << endl;
		} else {
			cout << "Es Escaleno" << endl;
		}
	}
	return 0;
}
