#include <iostream>

using namespace std;

void mostrardos(int vecptos[], int dim, string vcod[])
{
	for (int i = 0; i < dim; i++)
		cout << vcod[i] << ": " << vecptos[i] << endl;
}

void sortdoble(int vord[], int tam, string vaux[])
{
	int i, pos, imin;

	for (pos = 0; pos < tam - 1 ; pos++) {
		imin = pos;
		for (i = pos+1 ; i < tam ; i++)
			if (vord[i] > vord[imin])
				imin = i;
		swap(vord[pos], vord[imin]);
		swap(vaux[pos], vaux[imin]);
	}
}

//Variante A
//Similar a ejercicio anterior, solo cambia el tipo de datos de int a string
//en uno de los vectores.
int main()
{
	const int dim = 8;
	int puntos[dim] {52,22,34,61,44,55,27,49};
	string equipos[dim] {"uno", "dos", "tres", "cuatro", "cinco", "seis",
				"siete", "ocho"};

	cout << "Originalmente: " << endl;
	mostrardos(puntos, dim, equipos);

	sortdoble(puntos, dim, equipos);
	cout << endl << "Ordenando: " << endl;
	mostrardos(puntos, dim, equipos);
	return 0;
}
