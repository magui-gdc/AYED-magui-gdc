#include <iostream>
#include <iomanip>

using namespace std;

// Nota: se podría devolver int y reducir uno de los parámetros por referencia
void desarmar_fecha(int fecha, int& dia, int& mes, int& anio)
{
	dia = fecha % 100;
	mes = fecha % 10000 / 100;
	anio = fecha / 10000;
}

int main()
{
	cout << "Una fecha como AAAAMMDD: ";
	int fecha;
	cin >> fecha;
	int dia;
	int mes;
	int anio;
	desarmar_fecha(fecha, dia, mes, anio);
	cout <<"Fecha: " << dia << '/' << mes << '/' << anio << endl;
	//Variante
	cout <<"Fecha con Formato: " << setw(2) << setfill('0') << dia << '/'
	     << setw(2) << mes << '/'  << setw(4) << anio << endl;
	//Nota: setw afecta solamente al valor siguiente, en cambio
	// setfill queda hasta otro llamado a setfill
	return 0;
}
