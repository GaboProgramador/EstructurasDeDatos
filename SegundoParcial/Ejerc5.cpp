//Implementar el ordenamiento por inserción en una pila
#include <iostream>
#include "Pila.h"
#define FIN 99999       
using namespace std;

int main(){
    system("color f0");
    Pila p1;
    Tipo val;       
    Pila aux;
    void leerPila(Pila *p1);
    void imprimirPila(Pila p1);

    void leerPilaR(Pila *p1);
    void amplificarPila(Pila *p1,Tipo a,Pila *aux);
    void imprimirPilaR(Pila p1);
    
    bool comprobarAscendente(Pila *p1,Pila *aux);
    bool comprobarDescendente(Pila *p1,Pila *aux);

    void ordenamientoInsercion(Pila p1);

    void ordenamientoPorInsercion(Pila& pila);
    


    cout<<endl<<"PILA 1";
    leerPilaR(&p1); 
    cout<<"Pila Desordenada"<<endl;  
    imprimirPilaR(p1);   

    ordenamientoInsercion(p1);
    ordenamientoPorInsercion(p1);


    cout<<"Pila Ordenada"<<endl;
    imprimirPilaR(p1); 

    cout<<endl;
    system("pause");
}

void leerPilaR(Pila *p1){
    Tipo vl;
    cout<<endl<<"Ingrese el valor a apilar. Finalice con: "<<FIN<<": ";
    cin>>vl;
    if (vl!=FIN){
        p1->push(vl);
        leerPilaR(p1);

    }
}

void ordenamientoInsercion(Pila p1){
     void imprimirPila(Pila p1);
    Pila pilaOrdenada;
    while (!p1.pilaVacia()) {
        Tipo elemento = p1.pop();

        while (!pilaOrdenada.pilaVacia() && pilaOrdenada.cimaPila() > elemento) {
            p1.push(pilaOrdenada.pop());
        }

        pilaOrdenada.push(elemento);
    }

    //while (!pilaOrdenada.pilaVacia()) {
    //    p1.push(pilaOrdenada.pop());
    //}
    imprimirPila(pilaOrdenada);
}
void ordenamientoPorInsercion(Pila& pila) {
    void insertarOrdenado(Pila& pila, Tipo elemento);
    Pila pilaOrdenada;
    while (!pila.pilaVacia()) {
        Tipo elemento = pila.pop();
        insertarOrdenado(pilaOrdenada, elemento);
    }

    // Transferir los elementos ordenados a la pila original
    while (!pilaOrdenada.pilaVacia()) {
        pila.push(pilaOrdenada.pop());
    }
}

void insertarOrdenado(Pila& pila, Tipo elemento) {
    if (pila.pilaVacia() || elemento >= pila.cimaPila()) {
        pila.push(elemento);
    } else {
        Tipo temp = pila.pop();
        insertarOrdenado(pila, elemento);
        pila.push(temp);
    }
}


void amplificarPila(Pila *p1,Tipo a,Pila *aux){
    
    if(!p1->pilaVacia()){
        aux->push(p1->pop()*a);      //Extra e un elemento de p1 lo multiplica por a y lo guarda en aux
        //cout<<endl<<"Valor apilado en aux: "<<aux->cimaPila(); 
        amplificarPila(p1,a,aux);
        p1->push(aux->pop());

    }
}
void imprimirPilaR(Pila p1){
    if(!p1.pilaVacia()){
        cout<<endl<<"> "<<p1.pop()<<endl;
        imprimirPilaR(p1);
    }
}
bool comprobarAscendente(Pila *p1,Pila *aux){
    if(!p1->pilaVacia()){
        aux->push(p1->pop()); 
        if((aux->cimaPila()<=p1->cimaPila())){
            return true;
        }
        return false;
        comprobarAscendente(p1,aux);
    }

}
bool comprobarDescendente(Pila *p1,Pila *aux){
    if(!p1->pilaVacia()){
        aux->push(p1->pop()); 
        if((aux->cimaPila()>=p1->cimaPila())){
            return true;
        }
        return false;
        comprobarDescendente(p1,aux);
    }

}
void leerPila(Pila *p1){
    Tipo fin=77777;
    Tipo aux;
    do{
        cout<<endl<<"Ingrese un valor a apilar. Finalice con "<<fin<<": ";
        cin>>aux;
        if(aux!=fin){       //Valor ingresado no es igual al marcador de fin
            if(!p1->pilaLlena()){        //Aun no esta llena la pila
                p1->push(aux);
            }else{
                cout<<endl<<"Ya hasta ahi nomas :D ";
                aux=fin;
            }
            

        }
    }while(aux!=fin);       //repetir sino ingresa marcador de fin
    //cout<<endl<<"No. Elemntos: "<<p1.tamanioPila();
}
void imprimirPila(Pila p1){

    Tipo aux;
    cout<<endl<<"Elemtos de la pila: ";
    cout<<endl<<"=====================";
    cout<<endl<<"No. Elemntos: "<<p1.tamanioPila();
    while(!p1.pilaVacia()){        //V para permanecer dentro del ciclo

        aux=p1.pop();
        cout<<endl<<">  "<<aux<<endl;

    }


}