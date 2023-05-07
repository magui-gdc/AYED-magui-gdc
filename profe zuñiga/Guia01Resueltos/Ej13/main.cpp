#include <iostream>

using namespace std;

int main()
{
	unsigned long grcas = 1; //Granos en el primer casillero, por definición
	unsigned long totgran = 1; //Hasta el casillero 1, el total es 1
	int cas;

	cout << "Verficando tamaño variable: " << sizeof(totgran) << endl << endl;

	for (cas = 2; cas < 65; ++cas) {//para el resto de los casilleros calculo
		grcas *= 2;
		totgran += grcas;
//		cout << "casillero " << cas << " con granos " << grcas
//		<< " da un tablero con " << totgran << endl;
	}

	cout << "Total de granos = " << totgran << endl;

	return 0;
}
