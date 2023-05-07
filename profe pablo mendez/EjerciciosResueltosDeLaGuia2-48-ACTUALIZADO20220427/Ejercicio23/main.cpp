#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    bool hay_negativos = false;
    bool hay_positivos = false;
    bool hay_en_rango = false;
    float valor, suma = 0;
    float max_neg=0, min_pos=0, min_rango=0;
    cout << "Ingrese el valor " << i <<": " << endl;
    cin  >> valor;
    while (valor != 0)
    {
        i++;
        suma += valor;
        if (valor > 0)
        {
            if (valor < min_pos  || !hay_positivos)
                min_pos = valor;
            hay_positivos = true;

        }
        else
        {
            if (valor > max_neg || !hay_negativos)
                max_neg = valor;
            hay_negativos = true;
        }
        if ((valor >= -17.3 && valor <= 26.9) && (valor < min_rango || !hay_en_rango))
        {
                min_rango = valor;
                hay_en_rango = true;
        }
        cout << "Ingrese el valor " << i <<": " << endl;
        cin  >> valor;
    }
    if ( i > 1)
    {
        if (hay_positivos) //es equivalente a if(hay_positivos == true)
            cout << "El mínimo positivo es: " << min_pos << endl;
        else
            cout << "No se ingresaron número positivos." << endl;
        if (hay_negativos) //es equivalente a if(hay_negativos == true)
            cout << "El máximo negativo es: " << max_neg << endl;
        else
            cout << "No se ingresaron número negativos." << endl;
        if (hay_en_rango)
            cout << "El mínimo dentro del rango [-17.3;26.9] es: " << min_rango << endl;
        else
            cout << "No se ingresaron valores dentro de [-17.3;26.9]." << endl;
        cout << "El promedio es: " << suma / (i-1) << endl;
    }
    else
        cout << "No se ingresaron valores." << endl;
    return 0;
}
