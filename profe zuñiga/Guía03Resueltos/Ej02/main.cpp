#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream archilec;
	archilec.open("entrada.txt");
	if (!archilec) {
		cout << "Error al tratar de abrir el archivo para lectura" << endl;
		return 1;
	}

	float nro;
	float menor;
	int i = 1;
	int pos = i;

	if (archilec >> nro) {
		menor = nro;
		while (archilec >> nro) {
			++i;
			if (nro < menor) {
				menor = nro;
				pos = i;
			}
		}
		cout << "El menor valor es: " << menor << " y se enconcuentra "
		     << "en la posición " << pos << endl;
	} else {
		cout << "Archivo sin datos" << endl;
	}
	archilec.close();
	return 0;
}
