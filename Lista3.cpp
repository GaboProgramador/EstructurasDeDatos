// Permite invertir los nodos de los nodos de una lista

using namespace std;

#include <iostream>
#include "Lista.h"
#define FIN 0       //marcador final de lectura

int main(){
    system("color 0f");

    Lista l;                //crea el objeto de tipo  lista
    Pila p1;
    Nodo* act;
    void ingresarLista(Lista* l);
    void imprimirLista(Lista l);
    int contarLosNodos(Nodo* act);                   //Realiza el contreo de nodos
    void invertirNodos(Nodo* act,Lista l,Pila p);
    void extraerNodoDePila(Pila p1,Lista l);
    void imprimirLista(Nodo* act);
    ingresarLista(&l);
    invertirNodos(l.getPrimero(),l,p1);
    //imprimirLista(l);
    imprimirLista(act=l.getPrimero());
    extraerNodoDePila(p1,l);

    
    imprimirLista(l);

    //cout << endl << "La listaa contiene " << contarLosNodos(l.getPrimero()) << " nodos ";

    cout << endl;
    system("pause");
}

void imprimirLista(Lista l1){
    Nodo *act;
    act = l1.getPrimero();

    while(act != NULL){
        cout << endl << "> " << act->getDato() << endl;
        act = act->getPunt();
    }
}
void ingresarListaEnOrden(Lista* l){
    Tipo aux;           //variable de lectura
    
    cout << endl << "Ingrese un valor a la lista. Finalice con [" << FIN << "]: ";
    cin >> aux;

    if(aux != FIN){
        l -> insertarEnOrden(aux);        //se ingresa elemento a la lista
        ingresarListaEnOrden(l);
    }
    

}

int contarLosNodos(Nodo* act){
    if(act != NULL){            //act apunta a un nodo dentro de la lista :)
        return 1 + contarLosNodos(act -> getPunt());            //devolver el conteo del nodo actual + el siguiente llamado
    }
    return 0;                   //valor devuelto por el ultimo llamado de la funcion 


}
void invertirNodos(Nodo* act,Lista l,Pila p1){
    if (!l.esVacia())
    {
        if(act != NULL){
            p1.push(act -> getDato());
            invertirNodos(act -> getPunt(),l,p1);
        }
            

    }
    
}
void extraerNodoDePila(Pila p1,Lista l){
    if(!l.esVacia()){   
        if(!p1.pilaVacia()){
            l.insertarAlFinal(p1.pop());
        }
    }

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

void imprimirLista(Nodo* act){
    if(act != NULL){
        cout <<  "> " << act -> getDato() << endl;
        act = act -> getPunt();
        imprimirLista(act);
    }
}