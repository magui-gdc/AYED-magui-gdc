#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int cont = 1;
    //aaaammdd
    char fecha[9]="", nombre[20]="";
    char fecha_mayor[9]= "", fecha_menor[9]="";
    char nombre_mayor[20] ="", nombre_menor[20]="";
    cout << "Ingrese el nombre de la persona " << cont << ": " << endl;
    cin >> nombre;
    while(strcmp(nombre,"FIN") != 0  && strcmp(nombre,"fin") != 0 )
    {
        cout << "Ingrese la fecha de nacimiento de la persona " << cont << ": " << endl;
        cin  >> fecha;
        if (strcmp(fecha,fecha_mayor) > 0 || cont == 1)
        {
            strcpy(fecha_mayor, fecha);
            strcpy(nombre_mayor, nombre);
        }
        if (strcmp(fecha,fecha_menor) < 0  || cont == 1)
        {
            strcpy(fecha_menor, fecha);
            strcpy(nombre_menor, nombre);
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
