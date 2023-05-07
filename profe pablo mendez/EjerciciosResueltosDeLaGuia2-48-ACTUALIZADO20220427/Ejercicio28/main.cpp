#include <iostream>


using namespace std;
/*
    ACLARACION IMPORTANTE:
    Dependiendo del entorno (SO, Consola y su configuración), getchar requiere
    que se aprete enter para leer cada caracter. Esto hace que, en la mayoría
    de los casos este ejercicio funcione apretando enter luego de apretar cada
    letra. Para evitar ello, se agregó en la línea 26 una configuración que
    cambia el comportamiento de getchar. Luego, en la línea 61 se reestablece
    el comportamiento normal. Estas dos líneas ejecutan comandos de la consola
    de linux, NO FUNCIONAN EN WINDOWS.
    Si Ud. está en windows, puede incluir la librería conio.h y reemplazar las
    dos líneas "c=getchar();" por "c = getch(); cout << c;" y con ello evitaría
    tener que apretar enter para ingresar cada caractér. getch() no escribe el caratér
    pulsado por pantalla, por eso se agrega el cout << c.
    Por supuesto, además debería eliminar las líneas 26 y 61.
    El problema de la librería conio.h es que no es estándar.
    Si no se ingresa ninguna palabra, el programa muestra que se ingresó 1 palabra,
    queda como ejercicio para el alumno mejorar esta cuestión.
*/


int main()
{
    char c;
    int cantpalabras=0, cant_a=0, cant_e=0, cant_i =0, cant_o =0, cant_u=0;
    int longpalabra=0, longmaxpalabra=0;
    /* use system call to make terminal send all keystrokes directly to stdin */
    system ("/bin/stty raw");
    c = getchar();
    while (c != '.')
    {
        switch (c)
        {
            case 'a':
                cant_a++;
            break;
            case 'e':
                cant_e++;
            break;
            case 'i':
                cant_i++;
            break;
            case 'o':
                cant_o++;
            break;
            case 'u':
                cant_u++;
            break;
            case ' ':
                cantpalabras++;
                if (longpalabra>longmaxpalabra)
                    longmaxpalabra = longpalabra;
                longpalabra = 0;
            break;
        }
        if (c!= ' ')
            longpalabra++;
        c = getchar(); //lee el siguiente caractér
    }
    if (longpalabra>longmaxpalabra)
        longmaxpalabra = longpalabra;
    /* use system call to set terminal behaviour to more normal behaviour */
    system ("/bin/stty cooked");
    cout << endl;
    cout << "Cantidad de a:" << cant_a << endl;
    cout << "Cantidad de e:" << cant_e << endl;
    cout << "Cantidad de i:" << cant_i << endl;
    cout << "Cantidad de o:" << cant_o << endl;
    cout << "Cantidad de u:" << cant_u << endl;
    cout << "La cantidad de palabras fue: " << cantpalabras+1 << endl;
    cout << "La palabra más larga tuvo: " << longmaxpalabra << " letras." << endl;
    return 0;
}
