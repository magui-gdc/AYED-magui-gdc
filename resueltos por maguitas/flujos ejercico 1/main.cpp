#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void h (int i){

    cout << i;
};

int main(){

	int numeros, suma, cant=0;
	ifstream archivo;

	archivo.open("01entrada.txt");

	if (archivo.fail()){

		cout<<"error al abrir el archivo.";

	}

	h (numeros);

	while(!archivo.eof()){

		archivo>>numeros;
		cout<<"leido: "<<numeros<<endl;

		suma += numeros;
		cant++;


	}

	cout<<"suma: "<<suma<<endl;
	cout<<"cantidad de leidos: "<<cant<<endl;

	float promedio = float(suma) / cant;
	cout<<"promedio: "<<promedio;

	archivo.close();
	return 0;


}

