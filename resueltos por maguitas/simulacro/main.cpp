#include <iostream>
#include <fstream>

using namespace std;

const int nsuc = 8;
const int ngus = 6;

string vnomsuc[nsuc] {"uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho"};
string vnomgus[ngus] {"Muzzarella", "Fugazza", "Anchoas", "Fugazzeta", "Pizzaiola", "Jamón y Morrones"};

//Aquí van las funciones auxiliares que necesite programar

struct datos{

    int sucur;
    int gusto;
    int cant;

};




int main()
{
	//punto 1
    datos dias[] = {};
    datos temp;
    string sucur, gusto, cant;
    int index;

    ifstream archivo;
    archivo.open("D:\\clion\\simulacro\\Datos.txt");

    if(archivo.fail()){
        cout<<"error al abrir archivo";
    }

    while(archivo >> sucur >> gusto >> cant){

        temp.sucur = stoi(sucur);
        temp.gusto = stoi(gusto);
        temp.cant = stoi(cant);

        dias[index] = temp;
        index++;

        cout << sucur<<" "<< gusto <<" "<< cant << endl;

    }

	//punto 2
	//La mayor cantidad de pizzas se pidió en la sucursal cinco del gusto Fugazzeta

	//punto3
	//Mínima cantidad de pizzas vendidas en sucursal seis: 5 correspondiente al gusto Jamón y Morrones

	//punto4
	/*
	Gusto		Cantidad
	Muzzarella	10
	Fugazza		25
	Jamón y Morrones26
	Anchoas		27
	Pizzaiola	40
	Fugazzeta	42
	*/
	return 0;
}