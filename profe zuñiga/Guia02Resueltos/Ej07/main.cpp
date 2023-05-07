#include <iostream>

using namespace std;

int fib(int n);//versión iterativa
int fibrec(int n);//versión recursiva

int main()
{
	int dato;
	cout << "Ingrese dato: ";
	cin >> dato;
	cout << "fibonacciRecursivo(" << dato << ") = " << fibrec(dato) << endl;
	cout << "fibonacciIterativo(" << dato << ") = " << fib(dato) << endl;
	return 0;
}

//versión iterativa
int fib(int nro)
{
	if (nro < 2) {
		return nro;
	} else {
		int fn, fn1, fn2;
		fn2 = 0; // fib(0)
		fn1 = 1; // fib(1)
		for (int i = 2; i <= nro; ++i) {
			fn = fn1 + fn2;
			fn2 = fn1;
			fn1 = fn;
		}
		return fn;
	}
}

//versión recursiva
int fibrec(int nro)
{
	if (nro < 2)
		return nro;
	else
		return fibrec(nro-1)+fibrec(nro-2);

}
