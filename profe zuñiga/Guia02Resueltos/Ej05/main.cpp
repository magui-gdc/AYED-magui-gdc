#include <iostream>

using namespace std;

//versión iterativa
int sumatoria(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
		sum += i;
	return sum;
}

int main()
{
	int nro;
	cout << "Ingrese un nro entero y positivo: ";
	cin >> nro;
	cout << "Sumatoria de 1 a " << nro << " = " << sumatoria(nro) << endl;
	return 0;
}
