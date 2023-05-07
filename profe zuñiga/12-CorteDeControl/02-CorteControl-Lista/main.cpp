#include <iostream>
#include "listasutil.hpp"
#include "listas.hpp"

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
	Nodo<Venta>* lista = nullptr;
	agregar(lista, {"Ayacucho", "Focus", 134});
	agregar(lista, {"Ayacucho", "Golf", 52});
	agregar(lista, {"Ayacucho", "Golf", 138});
	agregar(lista, {"Chivilcoy", "Corolla", 130});
	agregar(lista, {"Chivilcoy", "Focus", 48});
	agregar(lista, {"Chivilcoy", "Golf", 25});
	agregar(lista, {"Mercedes", "Corolla", 92});
	agregar(lista, {"Mercedes", "Corolla", 30});
	agregar(lista, {"Mercedes", "Focus", 99});
	agregar(lista, {"Mercedes", "Golf", 20});
	agregar(lista, {"Mercedes", "Golf", 13});
	agregar(lista, {"Necochea", "Corolla", 146});
	agregar(lista, {"Necochea", "Focus", 115});
	agregar(lista, {"Necochea", "Golf", 116});
	agregar(lista, {"Necochea", "Golf", 122});
	agregar(lista, {"Saladillo", "Corolla", 96});
	agregar(lista, {"Saladillo", "Focus", 81});
	agregar(lista, {"Suipacha", "Corolla", 72});
	agregar(lista, {"Suipacha", "Corolla", 107});
	agregar(lista, {"Suipacha", "Golf", 73});

	Nodo<Venta>* p = lista; //Inicialización
	int total_autos = 0;//TotalesNivel0 a cero
	int cant_vtas = 0;
	while (p != nullptr) {//MIENTRAS Haya datos
		int autos_ciudad = 0;// TotalesNivel1 a cero
		int vtas_ciudad = 0;
		string ciudad_anterior = p->dato.ciudad; // ClaveNivel1 = dato.Clave1
		// MIENTRAS Haya datos Y dato.clave1 == ClaveNivel1
		while (p != nullptr && ciudad_anterior == p->dato.ciudad) {
			int autos_modelo = 0; // TotalesNivel2 a cero
			int vtas_modelo = 0;
			string modelo_anterior = p->dato.modelo; // ClaveNivel2 = dato.Clave2
			// MIENTRAS Haya datos Y dato.clave1 == ClaveNivel1
			//                     Y dato.clave2 == ClaveNivel2
			while (p != nullptr && ciudad_anterior == p->dato.ciudad
					&& modelo_anterior == p->dato.modelo) {
				cout << p->dato << endl; // Acciones para el dato
				// TotalesNivel2 += dato.camposASumar
				autos_modelo += p->dato.cant;
				++vtas_modelo;
				p = p->sig;// Pasar a siguiente elemento en la secuencia
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
