#include <iostream>

using namespace std;

//versión iterativa
unsigned long int fact(unsigned int n)
{
	unsigned long int f = 1;
	for (unsigned int i = 2; i <= n; ++i)
		f *= i;
	return f;
}

//versión recursiva
unsigned long int factrec(unsigned int n)
{
	if (n < 2)
		return 1;
	else
		return n * factrec(n-1);
}

//64 bits calcula bien hasta factorial de 22
int main()
{
	unsigned int nro;
	cout << "Ingrese un nro entero y positivo: ";
	cin >> nro;
	cout << "factorialRecursivo(" << nro << ") = " << factrec(nro) << endl;
	cout << "factorialIterativo(" << nro << ") = " << fact(nro) << endl;
	return 0;
}
