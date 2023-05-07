#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream archiesc; //ouput file stream: para escritura
    archiesc.open("Archivo.txt");
    if (!archiesc) {
        cout << "Error al abrir el archivo" << endl;
        return 1;
    }
    archiesc << "Primera línea" << endl;
    int dato = 53;
    archiesc << "Segunda línea con dato = " << dato << endl;
    archiesc.close();
    return 0;

}
