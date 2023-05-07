#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

using namespace std;
/* Hipotesis o precondiciones:
- M lo informa el usuario al comenzar el programa.
- Se pueden almacenar hasta 1000 caracteres para los números anteriores a cero.
- Los números ingresados son enteros entre 0 y 36 inclusive.
- Los colores se leen en un caractér: r o R= rojo; n o N= negro y v o V= verde (cero).
- Para la cantidad máxima de veces que salió el negro seguido se cuenta la secuencia
máxima de negros seguidos.
*/
int main()
{
    int m, numero, numanterior;
    char anteriores_a_ceros[1000]="";
    char str_num[3]; //para guardar el número convertido a vector de caracteres
    char color, coloranterior;
    int contceros =0;//Contador de ceros
    int contrepenegro =0, contmaxrepenegro =0;
    int contrepenumseguido =0, contrepemaxnumseguido =0, numrepe = 0;
    int contcoloralternado =0, contmaxcoloralternado =0;
    int contsegundanegada =0,  contmaxsegundanegada =0;

    cout << "Ingrese la cantidad de pares a leer:" << endl;
    cin >> m;
    for(int i=1; i <= m; i++)
    {
        cout << "***** Tiro " << i << " *****" << endl;
        cout << "Ingrese el numero: ";
        cin >> numero;
        cout << "Ingrese el color:  n o N para negro, r o R para rojo, v o V para el cero";
        cin >>  color;
        //PUNTO A: cuántas veces salió el cero y números anteriores a cada cero
        if (!numero) //es equivalente a if (numero == 0)
        {
            contceros++;
            if (i > 1) //si no es el primer número, almaceno el número anterior
            {
                sprintf(str_num,"%d",numanterior);//convierte el int a vector de caracteres y lo guarda en str_num
                strcat(anteriores_a_ceros, str_num); //concatena str_num a anteriores_a_ceros
                strcat(anteriores_a_ceros, ", ");
            }
        }
        //PUNTO B: mayor cantidad de veces que se repite el negro
        if ((coloranterior == 'n'|| coloranterior == 'N') && (color == 'n' || color == 'N'))
            contrepenegro++;
        else
            contrepenegro =0;
        /* vamos a preguntar si la cantidad de negros seguidos hasta ahora es mayor a la cantidad
        de negros seguidos hasta el tiro anterior: */
        if (contrepenegro > contmaxrepenegro)
            contmaxrepenegro = contrepenegro;
        //PUNTO C: mayor cantidad de veces seguidas que se repite el mismo numero
        if (numanterior == numero)
            contrepenumseguido++;
        else
            contrepenumseguido =0;
        if (contrepenumseguido> contrepemaxnumseguido)
        {
                contrepemaxnumseguido = contrepenumseguido;
                numrepe = numero;//guarda el numero que se repitió máxima ctdad de veces
        }
        //PUNTO D: mayor cantidad de veces que se alterna el color
        if (
                ((coloranterior == 'R'|| coloranterior == 'r') && (color == 'n' || color == 'N'))
                ||
                ((coloranterior == 'N'|| coloranterior == 'n') && (color == 'R' || color == 'r'))

        )
            contcoloralternado++;
        else
            contcoloralternado =0;
        if (contcoloralternado > contmaxcoloralternado)
            contmaxcoloralternado= contcoloralternado;
        //PUNTO E: veces seguidas que se niega la segunda docena
        if (!(numanterior>12 && numanterior<=24)&& !(numero > 12 && numero<=24))
            contsegundanegada++;
        else
            contsegundanegada = 0;
        if (contsegundanegada > contmaxsegundanegada)
            contmaxsegundanegada = contsegundanegada;
        //FIN PUNTO E
        //Nos quedamos con los valores del tiro para tenerlos como valores al tiro anterior en el siguiente par:
        coloranterior = color;
        numanterior = numero;
    }
    cout << "a - El cero salio " << contceros << " veces." << endl;
    cout << "Los valores anteriores a cada cero son: " << anteriores_a_ceros << endl;
    cout << "b - La mayor cantidad de veces seguidas que salio negro fue: " << contmaxrepenegro << endl;
    if (contrepemaxnumseguido>0)
        cout << "c - El número que salió seguido mayor cantidad de veces fue el " << numrepe << "  y salió: " << contrepemaxnumseguido << " seguidas" << endl;
    else
        cout << "c - Ningún número salió al menos dos veces seguidas." << endl;
    cout << "d - La mayor cantidad de veces seguidas que se alternaron rojos y negros fue: " << contmaxcoloralternado << endl;
    cout << "e - La mayor cantidad de veces seguidas que no salió segunda docena fue: " << contmaxsegundanegada << endl;
    return 0;
}
