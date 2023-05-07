//Cargar un vector con los promedios anuales (pueden tener decimales) de las notas de 10
//alumnos. Informe el promedio de todas esas notas (calculado por una función) y cuantos
//alumnos estuvieron por encima del promedio (calculado por otra función). Si lee del archivo
//datosG04E03.txt el promedio es 7,792 y la cantidad de alumnos que superan el promedio es 5.

#include <iostream>
#include <fstream>
using namespace std;

void mostrar(double vector[], int largoV)
{
    for(int i=0;i<largoV;i++){
        cout<<"leido en posicion "<<i<<": "<<vector[i]<<endl;
    }
}

double promedio(double notas[], int largoV)
{
    double suma = 0;
    int cant = 0;

    for(int i=0; i<largoV; i++){
        suma += notas[i];
        cant++;
    }

    return suma/cant;
}

double encimaPromedio(double notas[], double promedio, int largoV)
{
    int alumnos = 0;

    for(int i=0; i<largoV; i++){
        if(notas[i]>promedio){
            alumnos++;
        }
    }

    return alumnos;
}

int main() {
    const int largoV = 10;
    double notas[largoV]={};

    ifstream archivo;

    archivo.open("datosG04E03.txt");

    if(archivo.fail()){
        cout<<"error al abrir el archivo.";
        return 1;
    }

    for(int i=0; i<largoV; i++){
        archivo >> notas[i];
    }

    archivo.close();

    mostrar(notas, largoV);

    double prom;
    prom = promedio (notas, largoV);

    cout<<"-------------------------"<<endl;
    cout<<"el promedio de notas es "<<prom<<" y hay "<<encimaPromedio(notas,prom,largoV)<<" alumnos por encima del promedio"<<endl;

    return 0;
}
