#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string copia;
    ifstream archivo;
    archivo.open("01entrada.txt");

    if(archivo.fail()){
        cout<<"error";
    }

    while(!archivo.eof()){
        getline(archivo,copia);
        cout<<copia;
    }

    archivo.close();
    return 0;
}
