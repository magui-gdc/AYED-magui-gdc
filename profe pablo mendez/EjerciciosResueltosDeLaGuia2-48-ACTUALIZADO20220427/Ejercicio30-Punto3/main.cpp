#include <iostream>

using namespace std;

int main()
{
    int cant_ceros =0, sum_neg =0, cant_pos =0;
    float sum_pos =0;
    int valor, valor_anterior;
    cout << "Ingrese un valor:" << endl;
    cin >> valor;
    do
    {
        //Procesar:
        if (valor == 0)
            cant_ceros++;
        else
        {
            //En este caso las llaves no serían necesarias porque este else
            //contiene una única sentencias que es un if-else
            if (valor < 0)
                sum_neg += valor;
            else
            {
                sum_pos += valor;
                cant_pos++;
            }
        }
        valor_anterior = valor;
        /* esta solución repite el cout y cin pero no existe posibilidad
        de fallar en el primer caso */
        cout << "Ingrese un valor:" << endl;
        cin >> valor;
    } while (valor != valor_anterior);
    cout << "========= Resultados ==========" << endl;
    cout << "Cantidad de ceros: " << cant_ceros << endl;
    cout << "Sumatoria de los negativos: " << sum_neg << endl;
    if (cant_pos > 0)
        cout << "Promedio de los positivos: " << sum_pos / cant_pos << endl;
    else
        cout << "No se ingresaron valores positivos." << endl;
    return 0;
}
