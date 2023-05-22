//Pila3
//Programa que permite el ingreso de una pila de valoras y proceda a multiplicar sus elementos o un nuevo valor
//GabrielJimenez
#include <iostream>
#include "Pila.h"
#define FIN 99999       //marador de fin de lectura
using namespace std;

int main(){
    system("color f0");
    Pila p1;
    Tipo val;       //Valor se multiplica la pila
    Pila aux;
    void leerPila(Pila *p1);
    void imprimirPila(Pila p1);

    void leerPilaR(Pila *p1);
    void amplificarPila(Pila *p1,Tipo a,Pila *aux);
    void imprimirPilaR(Pila p1);
    
    bool comprobarAscendente(Pila *p1,Pila *aux);
    bool comprobarDescendente(Pila *p1,Pila *aux);


    cout<<endl<<"PILA 1";
    leerPilaR(&p1);   //Llamado a la funcion
    //cout<<endl<<"Ingrese un valor por el que se debe multiplicar: ";
    //cin>>val;
    //amplificarPila(&p1,val,&aux);
    imprimirPilaR(p1);   //Imprime la pila

    cout<<endl<<"La pila "<<(comprobarAscendente(&p1,&aux)?"Si":"No")<<" esta esta ordenada ascendentemente";
    cout<<endl<<"La pila "<<(comprobarDescendente(&p1,&aux)?"Si":"No")<<" esta esta ordenada descendentemente";

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