#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int nro;
	ifstream archilec;
	archilec.open("entrada.txt");
	if (!archilec) {
		cout << "Error al tratar de abrir el archivo para lectura" << endl;
		return 1;
	}
	ofstream arpares;
	arpares.open("pares.txt");
	if (!arpares) {
		cout << "Error al tratar de abrir el archivo de los pares" << endl;
		archilec.close();
		return 1;
	}
	ofstream arcimp;
	arcimp.open("impares.txt");
	if (!arcimp) {
		cout << "Error al tratar de abrir el archivo de los impares" << endl;
		archilec.close();
		arpares.close();
		return 1;
	}

	while (archilec >> nro) { //falso cuando no logre leer un nro
		if (nro % 2 == 0)
			arpares << nro << endl;
		else
			arcimp << nro << endl;
	}
	cout << "Proceso terminado" << endl;
	archilec.close();
	arpares.close();
	arcimp.close();
	return 0;
}
