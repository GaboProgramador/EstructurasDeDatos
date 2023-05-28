//Definicion del TDA lista simplemente enlazada
#ifndef _LISTA_H
#define _LISTA_H
using namespace std;
#include "Nodo.h"

class Lista{
private:
    Nodo* primero;              //atributo que almacena la direecion del primer nodo de la lista


public:
    Lista();                    //metodo constructor
    void setPrimero(Nodo* v);   //metodo que actualiza el estado el atributo primero 
    Nodo* getPrimero();         //devuelve el estado del atributo
    bool esVacia();             //metodo que comprueba si la lista es vacia
    void vaciarLista();         //elimina todos los nodos de la lista
    void insertarAlInicio(Tipo v); 
};

Lista::Lista(){
    setPrimero(NULL);           //inicializa el comiendo de la lista
}

void Lista::setPrimero(Nodo* v){
    primero = v;                //actualiza el estado del atributo primero
}

Nodo* Lista::getPrimero(){
    return primero;             //retorna el estado del atributo
} 

bool Lista::esVacia(){
    return (getPrimero() == NULL);
}

void Lista::vaciarLista(){
    setPrimero(NULL);
}

void Lista::insertarAlInicio(Tipo v){
    Nodo* nuevo;                            //direccion de memoria del nuevo nodo a crear
    nuevo = new Nodo(v,getPrimero());       //me da la dirreccion de memoria de nuevo nodo a crear
    setPrimero(nuevo);                      //actualiza el apuntador primero

}

#endif

