#include <iostream>

using namespace std;

template <typename T> void suma(T a, T b)
{
	cout << a << " + " << b << " = " << a + b << endl;
}

int main()
{
    suma(2, 3);
    suma(4.1, 1.2);
    suma<double>(3.2, 7);
    //sin <double> da error por no saber cuál elegir
    suma<string>("Hola, ", "que tal");
    //Los literales como "Hola" no son string sino char[], que no tiene
    //definido el operador +, por eso indico que sea string
    return 0;
}
