#include <iostream>

using namespace std;

int armar_fecha(int dia, int mes, int anio)
{
	return anio * 10000 + mes * 100 + dia;
}

int main()
{
	cout << "Una fecha mediante 3 enteros (dia mes año): ";
	int dia, mes, anio;
	cin >> dia >> mes >> anio;
	int fecha = armar_fecha(dia, mes, anio);
	cout <<"Fecha: " << fecha << endl;
	//Variante
	cout << "Una fecha como dia/mes/año: ";
	char sep;
	cin >> dia >> sep >> mes >> sep >> anio;
	//Aternativa: (El método ignore consume tantos caracteres como indique
	//su parámetro del flujo de entrada y los descarta
//	cin >> dia;
//	cin.ignore(1);
//	cin >> mes;
//	cin.ignore(1) ;
//	cin >> anio;
	fecha = armar_fecha(dia, mes, anio);
	cout <<"Fecha: " << fecha << endl;
	return 0;
}
