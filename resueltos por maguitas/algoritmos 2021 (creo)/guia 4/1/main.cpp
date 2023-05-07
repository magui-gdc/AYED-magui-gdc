//Armar un vector con 10 valores enteros en la inicialización. Hallar la sumatoria de los valores.
//Si prueba con los pares comenzando en 2, la suma debe dar 110.

#include <iostream>
using namespace std;

int suma(int vector[]){

    int resultado = 0;
    for(int i = 0; i<10; i++){

        resultado += vector[i];

    }

    return resultado;
}

int main(){

    int vector[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    cout << suma(vector);
}