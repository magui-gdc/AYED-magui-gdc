#include <iostream>
#include <fstream>

using namespace std;

//En esta versión generamos un nuevo archivo nuevo con la concatenación
int main ()
{
	ifstream arcuno, arcdos;
	ofstream arconcat;
	arcuno.open("uno.txt");
	if (!arcuno) {
		cout << "Error al abrir el primer archivo" << endl;
		return 1;
	}
	arcdos.open("dos.txt");
	if (!arcdos) {
		cout << "Error al abrir el primer archivo" << endl;
		arcuno.close();
		return 1;
	}
	arconcat.open("concat.txt");
	if (!arconcat) {
		cout << "Error al abrir el archivo resultado" << endl;
		arcuno.close();
		arcdos.close();
		return 1;
	}
	string linea;
	while(getline(arcuno, linea))
		arconcat << linea << endl;
	while(getline(arcdos, linea))
		arconcat << linea << endl;

	arcuno.close();
	arcdos.close();
	arconcat.close();
	cout << "Proceso terminado" << endl;
	return 0;
}
