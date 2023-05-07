#include <iostream>

using namespace std;

int main()
{
	cout << "Ingrese dos valores (uno tras otro): " << endl;
	int a, b;
	cin >> a >> b;
	cout << "Los valores ingresados son: " << a << " y " << b << endl;
	//Método tradicional, usable en cualquier lenguaje
	int aux = a;
	a = b;
	b = aux;
	cout << "Luego de intercambiarlos: " << a << " y " << b << endl;
	//Solución particular de C++ usando su biblioteca estándar
	swap(a,b);
	cout << "intercambiados otra vez: " << a << " y " << b << endl;
	return 0;
}
