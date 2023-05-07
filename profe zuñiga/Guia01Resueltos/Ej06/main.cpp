#include <iostream>

using namespace std;

int main()
{
	cout << "Ingrese la medida del lado: ";
	float lado;
	cin >> lado;
	float peri = lado * 4;
	float sup = lado * lado;
	cout << "Perímetro: " << peri << endl;
	cout << "Superficie: " << sup << endl;
	return 0;
}
