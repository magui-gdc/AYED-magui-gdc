//Dado un vector de double, armar una función que devuelva el promedio de aquellos valores
//que superen una determinado parámetro (que se pasará a la función).

#include <iostream>
#include <fstream>
using namespace std;

void mostrar(double vector[]){
    for(int i=0;i<7;i++){
        cout<<"leido en posicion "<<i<<": "<<vector[i]<<endl;
    }
}

double promedio(double vector[], int parametro){

    double suma = 0;
    int cant = 0;

    for(int i=0; i<7; i++){
        if(vector[i]>parametro){
            suma += vector[i];
            cant++;
        }
    }

    return suma/cant;

}

int main() {

    double vector[7]={};

    ifstream archivo;

    archivo.open("datosG04E02.txt");

    if(archivo.fail()){
        cout<<"error al abrir el archivo.";
        return 1;
    }

    for(int i=0; i<7; i++){
        archivo >> vector[i];
    }

    archivo.close();

    mostrar (vector);
    cout<<"-------------------------"<<endl;

    cout<<"promedio de los mayores de 0: "<< promedio(vector, 0)<<endl;
    cout<<"promedio de los mayores de 6: "<< promedio(vector, 6)<<endl;
    cout<<"promedio de los mayores de 9: "<< promedio(vector, 9)<<endl;
    cout<<"promedio de los mayores de 15: "<< promedio(vector, 15)<<endl;
}
