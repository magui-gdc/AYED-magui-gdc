#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo *sgte = NULL;
};

void insertarUltimo(Nodo *&lista, int dato)
{
    if(!lista)
    {
        lista = new Nodo();
        lista->info = dato;
        lista->sgte = NULL;
    }
    else
    {
        Nodo *aux = lista;
        while(aux->sgte != NULL )
            aux = aux->sgte;
        aux->sgte = new Nodo();
        aux = aux->sgte;
        aux->info = dato;
        aux->sgte = NULL;
    }
    return;
}

void mostrarLista(Nodo *lista)
{
    while (lista)
    {
        cout << lista->info << endl;
        lista = lista->sgte;
    }
    return;
}

Nodo *intercalar(Nodo *l1, Nodo *l2)
{
    Nodo *listanueva = NULL;
    while(l1 && l2)
    {
        insertarUltimo(listanueva, l1->info);
        l1 = l1->sgte;
        insertarUltimo(listanueva, l2->info);
        l2 = l2->sgte;
    }
    while(l1)
    {
        insertarUltimo(listanueva, l1->info);
        l1 = l1->sgte;
    }
    while(l2)
    {
        insertarUltimo(listanueva, l2->info);
        l2 = l2->sgte;
    }
    return listanueva;
}


int main()
{
    Nodo *lista1 = NULL;
    Nodo *lista2 = NULL;
    Nodo *listaIntercalada;
    insertarUltimo(lista1,23);
    insertarUltimo(lista1,14);
    insertarUltimo(lista1,31);
    insertarUltimo(lista1,7);

    insertarUltimo(lista2,101);
    insertarUltimo(lista2,145);
    insertarUltimo(lista2,133);
    insertarUltimo(lista2,178);
    insertarUltimo(lista2,153);
    insertarUltimo(lista2,115);
    cout << "Elementos de la lista 1:" << endl;
    mostrarLista(lista1);
    cout << "Elementos de la lista 2:" << endl;
    mostrarLista(lista2);
    listaIntercalada = intercalar(lista1, lista2);
    cout << "Lista intercalada:" << endl;
    mostrarLista(listaIntercalada);
    return 0;
}
