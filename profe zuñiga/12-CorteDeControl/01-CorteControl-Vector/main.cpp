#include <iostream>

using namespace std;

struct Venta {
	string ciudad;
	string modelo;
	int cant;
};

ostream& operator << (ostream &os, const Venta& vta)
{
	os << vta.ciudad << '\t' << vta.modelo << '\t' << vta.cant;
	return os;
}

int main()
{
	const int dim = 20;
	Venta v[dim] {
		"Ayacucho", "Focus", 134,
		"Ayacucho", "Golf", 52,
		"Ayacucho", "Golf", 138,
		"Chivilcoy", "Corolla", 130,
		"Chivilcoy", "Focus", 48,
		"Chivilcoy", "Golf", 25,
		"Mercedes", "Corolla", 92,
		"Mercedes", "Corolla", 30,
		"Mercedes", "Focus", 99,
		"Mercedes", "Golf", 20,
		"Mercedes", "Golf", 13,
		"Necochea", "Corolla", 146,
		"Necochea", "Focus", 115,
		"Necochea", "Golf", 116,
		"Necochea", "Golf", 122,
		"Saladillo", "Corolla", 96,
		"Saladillo", "Focus", 81,
		"Suipacha", "Corolla", 72,
		"Suipacha", "Corolla", 107,
		"Suipacha", "Golf", 73,
	};

	int i = 0; //Inicialización
	int total_autos = 0;//TotalesNivel0 a cero
	int cant_vtas = 0;
	while (i < dim) {//MIENTRAS Haya datos
		int autos_ciudad = 0;// TotalesNivel1 a cero
		int vtas_ciudad = 0;
		string ciudad_anterior = v[i].ciudad; // ClaveNivel1 = dato.Clave1
		// MIENTRAS Haya datos Y dato.clave1 == ClaveNivel1
		while (i < dim && ciudad_anterior == v[i].ciudad) {
			int autos_modelo = 0; // TotalesNivel2 a cero
			int vtas_modelo = 0;
			string modelo_anterior = v[i].modelo; // ClaveNivel2 = dato.Clave2
			// MIENTRAS Haya datos Y dato.clave1 == ClaveNivel1
			//                     Y dato.clave2 == ClaveNivel2
			while (i < dim && ciudad_anterior == v[i].ciudad
					&& modelo_anterior == v[i].modelo) {
				cout << v[i] << endl; // Acciones para el dato
				// TotalesNivel2 += dato.camposASumar
				autos_modelo += v[i].cant;
				++vtas_modelo;
				++i;// Pasar a siguiente elemento en la secuencia
			}
			//Acciones para TotalesNivel2
			cout << "\t\t" << modelo_anterior << "\t" << autos_modelo
				<< "\t(" << vtas_modelo << " ventas)" << endl;
			// TotalesNivel1 += TotalesNivel2
			autos_ciudad += autos_modelo;
			vtas_ciudad += vtas_modelo;
		}
		// Acciones para TotalesNivel1
		cout << ciudad_anterior << "\t====\t" << autos_ciudad << "\t("
			<< vtas_ciudad << " ventas)" << endl << endl;
		// TotalesNivel0 += TotalesNivel1
		total_autos += autos_ciudad;
		cant_vtas += vtas_ciudad;
	}
	// Acciones para TotalesNivel0
	cout << "Total" << "\t============\t" << total_autos
		<< "\t(" << cant_vtas << " ventas)" << endl;
	return 0;
}
