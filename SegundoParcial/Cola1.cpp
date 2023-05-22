//Programa que implementa la gestion basica del TDA cola
//Gabriel Jimenez
#include <iostream>
#include "Cola.h"
#define FIN 00
using namespace std;

int main(){
    system("color f0");
    Cola c1;

    void leerColaR(Cola *c1);
    void imprimirColaR(Cola c1);

    leerColaR(&c1);
    cout << endl << "Elementos de la cola: ";
    cout << endl << "=======================";
    imprimirColaR(c1);

    cout << endl;
    system("pause");
}
void leerColaR(Cola *c1){
    Tipo x;
    cout << endl << "Valor a insertar. Finalice con "<<FIN<<": ";
    cin >> x;
    if(x != FIN){
        if(!c1->colaLlena()){
        c1 -> insentar(x);
        leerColaR(c1);
        }else{
            cout << endl << "C1:'Ya me llene :('";
        }
    }
}   
void imprimirColaR(Cola c1){
    if(!c1.colaVacia()){
        //no hay que cambiar el orden en colas, explota BOOM!
        cout << endl << ">  " << c1.quitar();
        imprimirColaR(c1);
    }
}


    