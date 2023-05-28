//Implementa una lista simplemente en lazada
//Gabriel Jimenez 7182

using namespace std;

#include <iostream>
#include "Lista.h"
#define FIN 0       //marcador final de lectura

int main(){
    system("color 0f");

    Lista l;                //crea el objeto de tipo  lista

    void ingresarLista(Lista* l);        //permite el ingreso de valores a la lista
    void imprimirLista(Lista l);
    cout << endl << "El apuntador primero apunta a: " << l.getPrimero();
    cout << endl << "La lista " << (l.esVacia()? "SI ": "NO ") << "esta vacia";

    ingresarLista(&l);           //llamado a la funcion 
    imprimirLista(l);

    cout << endl;
    system("pause");
}

void ingresarLista(Lista* l){
    Tipo aux;           //variable de lectura
    
    cout << endl << "Ingrese un valor a la lista. Finalice con [" << FIN << "]: ";
    cin >> aux;

    if(aux != FIN){
        l->insertarAlInicio(aux);        //se ingresa elemento a la lista
        ingresarLista(l);
    }
    

}

void imprimirLista(Lista l){
    Nodo* act;
    act = l.getPrimero();

    if(act != NULL){
        cout <<  "> " << act -> getDato() << endl;
        act = act -> getPunt();
        imprimirLista(l);
    }
}