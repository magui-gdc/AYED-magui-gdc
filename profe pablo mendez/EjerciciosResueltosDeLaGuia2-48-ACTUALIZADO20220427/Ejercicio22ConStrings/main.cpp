#include <iostream>

using namespace std;

int main()
{
    int cont = 1;
    string fecha="", nombre="";
    string fecha_mayor= "", fecha_menor="";
    string nombre_mayor ="", nombre_menor="";
    cout << "Ingrese el nombre de la persona " << cont << ": " << endl;
    cin >> nombre;
    while(nombre != "FIN" && nombre != "fin")
    {
        cout << "Ingrese la fecha de nacimiento de la persona " << cont << ": " << endl;
        cin  >> fecha;
        if (fecha > fecha_mayor || cont == 1)
        {
            fecha_mayor = fecha;
            nombre_mayor = nombre;
        }
        if (fecha < fecha_menor || cont == 1)
        {
            fecha_menor = fecha;
            nombre_menor = nombre;
        }
        cont++; //equivalente a hacer cont = cont +1;
        cout << "Ingrese el nombre de la persona " << cont << ": " << endl;
        cin >> nombre;
    }
    if (cont > 1) //Al menos una persona ingresada
    {
        cout << "El nombre de la persona mayor es: " << nombre_menor << endl;
        cout << "Su fecha de nacimiento es: " << fecha_menor << endl;
        cout << "El nombre de la persona menor es: " << nombre_mayor << endl;
        cout << "Su fecha de nacimiento es: " << fecha_mayor << endl;
    }
    else
        cout << "No se ingresaron personas." << endl;
    return 0;
}
