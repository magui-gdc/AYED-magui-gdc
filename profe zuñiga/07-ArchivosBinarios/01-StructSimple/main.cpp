#include <iostream>
#include <fstream>

using namespace std;

struct Alumno {
	int legajo;
	double promedio;
};

void mostrar(Alumno vec[], int dim)
{
	cout << "Legajo\tPromedio" << endl;
	for (int i = 0; i < dim; i++)
		cout << vec[i].legajo << "\t" << vec[i].promedio << endl;
}

int main()
{
	const int dim = 6;
	Alumno vec[dim] = {1, 8.7, 2, 9.2, 3, 7.4, 4, 8.3, 5, 5.25, 6, 6.75};
	Alumno vacio[dim] {0};
	int i;

	cout << "Mostrando datos precargados en vec" << endl;
	mostrar(vec, dim);

	//Escritura al archivo
	ofstream archiesc;
	archiesc.open("Archivo.bin", ios::binary);
	if (!archiesc) {
		cout << "No se pudo abrir el archivo de escritura" << endl;
		return 1;
	}
	cout << endl << "Escribiendo al archivo:" << endl;
	for (i = 0; i < dim && archiesc; ++i)
		archiesc.write((char *)&vec[i], sizeof(Alumno));
//	archiesc.write(reinterpret_cast<char *>(vec), sizeof(vec[0]) * dim);

	archiesc.close();
	cout << "Archivo creado" << endl << endl;

	//Lectura archivo
	ifstream archilec;
	archilec.open("Archivo.bin", ios::binary);
	if (archilec) {
		cout << "Leyendo del archivo:" << endl;
		for (i = 0; i < dim && archilec; ++i)
			archilec.read((char *) &vacio[i], sizeof(vacio[i]));
//		archilec.read(reinterpret_cast<char *>(vacio), sizeof(vacio[0]) * dim);
		if (!archilec)
			cout << "***Fallo en la lectura***" << endl;

		archilec.close();
		cout << "Datos Leídos en vacio" << endl;
		mostrar(vacio, dim);
	} else {
		cout << "No se pudo abrir el archivo de lectura" << endl;
		return 1;
	}
	return 0;
}
