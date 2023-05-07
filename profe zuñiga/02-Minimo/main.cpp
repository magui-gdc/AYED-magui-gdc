#include <iostream>

using namespace std;

void mostrar(int vec[], int dim)
{
	for (int i = 0; i < dim; i++)
		cout << i << ": " << vec[i] << endl;
}

//Devuelvo el valor del mínimo (no su posición)
int minimo_val(int vec[], int dim)
{
	int min = vec[0];
	for (int i = 1; i < dim; i++)
		if (vec[i] < min)
			min = vec[i];
	return min;
}

//Devuelvo la posición
int minimo_pos(int vec[], int dim)
{
	int min = vec[0];
	int imin = 0;

	for (int i = 1; i < dim; i++)
		if (vec[i] < min) {
			min = vec[i];
			imin = i;
		}
	return imin;
}

//Desuelvo posición, no uso variable min
int minimo(int vec[], int dim)
{
	int imin = 0;
	for (int i = 1; i < dim; i++)
		if (vec[i] < vec[imin])
			imin = i;
	return imin;
}

int main()
{
	const int dimvec = 10;
	int vec_ent[dimvec] =	{25, 7, 92, 13, 17, 74, 61, 53, 2, 4};

	cout << "Vector:" << endl;
	mostrar(vec_ent, dimvec);

	// para probar minimo_val
	int minval = minimo_val(vec_ent, dimvec);
	cout << endl << "El minimo valor es " << minval << endl;

	// para probar minimo o minimo_pos
	int posmin = minimo_pos(vec_ent, dimvec);
	cout << endl << "El minimo se encuentra en el indice " << posmin
	     << " y su valor es " << vec_ent[posmin] << endl;

	return 0;
}
