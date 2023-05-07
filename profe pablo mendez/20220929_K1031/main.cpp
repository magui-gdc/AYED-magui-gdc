#include <iostream>
#include <string.h>

using namespace std;

struct Alumno
{
    int legajo;
    char nombres[100];
    char apellidos[100];
    float promedio;
};

struct NodoListaSEAlumno
{
    Alumno info;
    NodoListaSEAlumno *sgte = NULL;
};

void insertarPrimero(NodoListaSEAlumno *&la, Alumno a)
{
    NodoListaSEAlumno *paux;
    paux = new NodoListaSEAlumno();
    paux->info = a; //(*paux).info = a;
    paux->sgte = la;
    la = paux;
    return;
}


void insertarUltimo(NodoListaSEAlumno *&la, Alumno a)
{
    NodoListaSEAlumno *paux;

    if (la == NULL)
    {
        la = new NodoListaSEAlumno();
        la->info = a;
        la->sgte = NULL;
    }
    else
    {
        paux = la;
        while (paux->sgte)
            paux = paux->sgte;
        paux->sgte = new NodoListaSEAlumno();
        paux = paux->sgte;
        paux->info = a; //(*paux).info = a;
        paux->sgte = NULL;
    }
    return;
}


Alumno quitarUltimo(NodoListaSEAlumno *&la, bool &pudoquitar)
{
    Alumno a;
    pudoquitar = false;
    NodoListaSEAlumno *pauxant, *paux;
    paux = la;
    pauxant = NULL;
    if (la)
    {
        pudoquitar = true;
        while(paux->sgte) //caso de más de un nodo
        {
            pauxant = paux;
            paux = paux->sgte;
        }
        if(!pauxant) //if(pauxant == NULL) //caso de lista con un solo nodo
        {
            a = la->info;
            delete la;
            la = NULL;
        }
        else
        {
            a = paux->info;
            delete paux;
            pauxant->sgte = NULL;
        }
    }
    return a;

}

Alumno quitarPrimero(NodoListaSEAlumno *&la, bool &pudoquitar)
{
    Alumno a;
    pudoquitar = false;
    NodoListaSEAlumno *paux;
    if (la)
    {
        pudoquitar= true;
        a = la->info;
        paux = la;
        la = la->sgte;
        delete paux;
    }
    return a;
}


void mostrarAlumno(Alumno a)
{
    cout << "=========== " << a.legajo << "=========== " << endl;
    cout << "Nombres: " << a.nombres << endl;
    cout << "Apellidos: " << a.apellidos << endl;
    cout << "Promedio: " << a.promedio << endl;
    return;
}

void recorrerLista(NodoListaSEAlumno *la)
{
    while (la)
    {
        mostrarAlumno(la->info);
        la = la->sgte;
    }
    return;
}

int main()
{
    NodoListaSEAlumno *listaAlumnos = NULL;
    Alumno a;
    bool quito;
    a.legajo = 1;
    a.promedio = 7.43;
    strcpy(a.nombres, "Mirtha");
    strcpy(a.apellidos, "Legrand");
    insertarUltimo(listaAlumnos, a);
    a.legajo = 2;
    a.promedio = 9.43;
    strcpy(a.nombres, "Carlitos");
    strcpy(a.apellidos, "Bala");
    insertarUltimo(listaAlumnos, a);
    a.legajo = 3;
    a.promedio = 9.3;
    strcpy(a.nombres, "Astor");
    strcpy(a.apellidos, "Piazzola");
    insertarUltimo(listaAlumnos, a);

    cout << "LISTA COMPLETA: " << endl;
    recorrerLista(listaAlumnos);
    getchar();
    cout << "QUITA UNO:" << endl;
    a = quitarPrimero(listaAlumnos, quito);
    if (quito)
    {
        cout << "El alumno quitado fue:" << endl;
        mostrarAlumno(a);
    }
    getchar();
    cout << "LISTA COMPLETA: " << endl;
    recorrerLista(listaAlumnos);
    a = quitarPrimero(listaAlumnos, quito);
    while(quito)
    {
        cout << "El alumno quitado fue:" << endl;
        mostrarAlumno(a);
        cout << "LISTA COMPLETA: " << endl;
        recorrerLista(listaAlumnos);
        a = quitarPrimero(listaAlumnos, quito);
    }

    return 0;
}
