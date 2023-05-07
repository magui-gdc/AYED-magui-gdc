#include <iostream>

using namespace std;

int main()
{
	int ang1, ang2, ang3;
	cout << "Ingrese el valor del primer ángulo: ";
	cin >> ang1;
	cout << "Ingrese el valor del segundo ángulo: ";
	cin >> ang2;
	ang3 = 180 - ang1 - ang2;
	cout << "El tercer ángulo vale: " << ang3 << endl;
	return 0;
}
