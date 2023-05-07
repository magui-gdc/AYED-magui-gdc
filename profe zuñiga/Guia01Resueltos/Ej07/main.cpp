#include <iostream>

using namespace std;

int main()
{
	cout << "Ingrese dos nros, uno seguido del otro: ";
	int nro1, nro2;
	cin >> nro1 >> nro2;
	if (nro1 > nro2)
	cout << "El mayor es: " << nro1 << endl;
	else
	cout << "El mayor es: " << nro2 << endl;
	//Variante usando el operador ternario ?:
	//cout << "El mayor es: " << (nro1 > nro2 ? nro1 : nro2);
	return 0;
}
