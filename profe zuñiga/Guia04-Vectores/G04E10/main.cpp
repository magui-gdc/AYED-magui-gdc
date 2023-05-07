#include <iostream>

using namespace std;

void mostrardos(int vec[], int dim, int vecpos[])
{
	for (int i = 0; i < dim; i++)
		cout << vecpos[i] << ": " << vec[i] << endl;
}

void sortdoble(int vord[], int tam, int vaux[])//usando algoritmo de selección
{
	int i, pos, imin;

	for (pos = 0; pos < tam - 1 ; pos++) {
		imin = pos;
		for (i = pos+1 ; i < tam ; i++)
			if (vord[i] > vord[imin])
				imin = i;
		// intercambia los valores en imin y pos:
		swap(vord[pos], vord[imin]);
		swap(vaux[pos], vaux[imin]);
	}
}

int main()
{
	const int dim = 8;
	int puntos[dim] = {52,22,34,61,44,55,27,49};
	int vpos[dim];

	for (int i = 0; i < dim; ++i)
		vpos[i] = i;

	cout << "Originalmente: " << endl;
	mostrardos(puntos, dim, vpos);

	sortdoble(puntos, dim, vpos);
	cout << endl << "Ordenando: " << endl;
	mostrardos(puntos, dim, vpos);
	return 0;
}
