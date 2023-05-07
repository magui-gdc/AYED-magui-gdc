#include <iostream>

using namespace std;

float fahr_a_cel(float fahr)
{
	return (fahr-32)*5/9; //*100/180
}

int main()
{
	float fa;
	cout << "Ingrese temperatura en fahrenheit: ";
	cin >> fa;
	cout << fa << " fahrenheit equivalen a " << fahr_a_cel(fa) << " celcius" << endl;
	return 0;
}
