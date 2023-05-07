#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	ifstream arcuno;
	fstream arcdos;
	//Al archivo dos, le contacteno los contenidos del uno
	//Comentar variante a y descomentar variante b para probar la
	//la variante b
	arcuno.open("uno.txt");
	if (!arcuno) {
		cout << "Error al abrir el primer archivo" << endl;
		return 1;
	}
	arcdos.open("dos.txt");//Variante a
	//arcdos.open("dos.txt", ios::out | ios::app); //Variante b
	if (!arcdos) {
		cout << "Error al abrir el segundo archivo" << endl;
		arcuno.close();
		return 1;
	}
	arcdos.seekp(0, ios::end);//Variante a
	string linea;
	while(getline(arcuno, linea))
		arcdos << linea << endl;

	arcuno.close();
	arcdos.close();
	cout << "Proceso terminado" << endl;
	return 0;
}
