#include <iostream>

using namespace std;

bool esbisiesto(int anio)
{
	return anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0);
}

int main()
{
	cout << "Ingrese el año a comprobar: ";
	int anio;
	cin >> anio;
	string condicion = esbisiesto(anio) ? " es bisiesto" : " no es bisiesto";
	cout << anio << condicion << endl;
	return 0;
}
