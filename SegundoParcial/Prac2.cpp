//Pila1
//Programa que permite el ingreso y visualizacion de datos de dos pilas y compararlas
//GabrielJimenez

#include <iostream>
#include "Pila.h"
using namespace std;

int main(){
    system("color f0");
    Pila p1,p2;

    void leerPila(Pila *p1);     //void por que usamos parametro por referencia//Ingresa elemtnos de una pila
    void imprimirPila(Pila p1); //prototipo de la funcion que permite visualizacion de los elemtos de una pila  
    bool compararPilas(Pila p1,Pila p2);        //permite la comparacion entre dos pilas

    cout<<endl<<"PILA 1";
    leerPila(&p1);   //Llamado a la funcion
    imprimirPila(p1);   //Imprime la pila
 
    cout<<endl<<"PILA 2";
    leerPila(&p2);   
    imprimirPila(p2);

    cout<<endl<<"Las dos pilas ingresadas "<<(compararPilas(p1,p2)?"SI":"No")<<" son iguales ";

    cout<<endl;
    system("pause");
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
bool compararPilas(Pila p1,Pila p2){
    if(p1.tamanioPila()!=p2.tamanioPila()){
        return false;
    }
    while(!p1.pilaVacia()){        //V para permanecer dentro del ciclo
        if(p1.pop()!=p2.pop()){
            return false;

        }

    }
    return true;

}