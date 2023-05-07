#include <iostream>

using namespace std;

int main()
{
	cout << "Ingrese la cantidad de bultos en stock: ";
	int bultos;
	cin >> bultos;
	cout << "Ingrese la cantidad de bultos por caja: ";
	int bulxcaj;
	cin >> bulxcaj;
	int cajas = bultos / bulxcaj; //Ojo, dividir por cero cuelga el programa
	//int cajas = bulxcaj > 0 ? bultos / bulxcaj : 0;
	int rem = bultos % bulxcaj;
	//int rem = bulxcaj > 0 ? bultos % bulxcaj : bultos;

	//Variante con iteraciones
//	int cajas = 0;
//	int rem = bultos;
//
//	while(rem >= bulxcaj) {
//	++cajas;
//	rem -= bulxcaj;
//	}

	cout << "La cantidad de cajas completas es " << cajas << endl;
	cout << "El remanente de bultos es: " << rem << endl;
	return 0;
}
