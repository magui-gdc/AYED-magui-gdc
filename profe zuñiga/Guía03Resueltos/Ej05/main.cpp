#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream archiesc;
	archiesc.open("Salida.txt");
	if (!archiesc) {
		cout << "Error al abrir el archivo para escribir" << endl;
		return 1;
	}
	cout << "Ingrese el texto y termine con EOF:" << endl;
	string pal;
	const int colmax = 80;
	// supondremos que no hay palabras de más de colmax caracteres
	if (cin >> pal) {
		archiesc << pal;
		int linea = pal.size();
		while (cin >> pal) {
			if (linea + pal.size() < colmax) {
				archiesc << " " << pal;
				linea += pal.size() + 1;
			} else {
				archiesc << endl << pal;
				linea = pal.size();
			}
		}
	}
	archiesc.close();
	return 0;
}
