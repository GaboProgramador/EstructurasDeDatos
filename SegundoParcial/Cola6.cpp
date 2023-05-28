//TDA cola circular se determine si cada valor ingresado es una capicua
//Numeros que se leen igual de izq a dere y viceversa

#include <iostream>
#include "ColaCircular.h"

#define FIN 0
using namespace std;

int main(){
    system("color f0");
    ColaCircular c1;

    void leerColaR(ColaCircular *c1);
    void imprimirColaR(ColaCircular c1);
    bool esCapicua(Tipo numero);


    leerColaR(&c1);
    cout << endl << "Elementos de la cola: ";
    cout << endl << "=======================";
    imprimirColaR(c1);

    cout << endl;
    system("pause");
}
bool esCapicua(Tipo numero){
    ColaCircular cola;
    Tipo aux = 0;
    Tipo org = numero;
    do{
        cola.insertar(numero%10);
        numero /= 10;
    }
    while (numero != 0);

    while (!cola.colaVacia()) {  
        aux = (aux * 10) + cola.quitar();
    }

    return (org==aux);
}
void leerColaR(ColaCircular *c1) {
    bool esCapicua(Tipo numero);
    Tipo x;
    cout << endl << "Valor a insertar. Finalice con "<<FIN<<": ";
    cin >> x;
    if(x != FIN){
        if(!c1->colaLlena()){
        cout << endl << "El numero ingresado " << (esCapicua(x)?"Si ":"No ") << "es capicua" << endl;   //Ternario
        c1 -> insertar(x);
        leerColaR(c1);
        }else{
            cout << endl << "C1:'Ya me llene :('";
        }
    }
}   
void imprimirColaR(ColaCircular c1){
    if(!c1.colaVacia()){
        //no hay que cambiar el orden en colas, explota BOOM!
        cout << endl << ">  " << c1.quitar();
        imprimirColaR(c1);
    }
}
