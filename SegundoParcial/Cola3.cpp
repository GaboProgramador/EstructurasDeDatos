//Determinar si las colas A y B son iguales 

#include <iostream>
#include "Cola.h"
#define FIN 00
using namespace std;

int main(){
    system("color f0");
    Cola c1,c2;
    Tipo vb;

    void leerColaR(Cola *c1);
    void imprimirColaR(Cola c1);
    bool compararCola(Cola c1, Tipo vb);
    bool compararTodaLaCola(Cola c1,Cola c2);

    cout << endl << "COLA 1: ";

    leerColaR(&c1);
    cout << endl << "Elementos de la cola 1: ";
    cout << endl << "=======================";
    imprimirColaR(c1);

    cout << endl << "COLA 2: ";

    leerColaR(&c2);
    cout << endl << "Elementos de la cola 2: ";
    cout << endl << "=======================";
    imprimirColaR(c2);


    //cout << endl << "Ingrese el valor a buscar: ";
    //cin >> vb;
    //cout << endl << "Todos los elementos de la cola 1 " << (compararTodaLaCola(c1,c2) ? " si ":" no ") << "se encuentran en la cola 2";
    //cout << endl << "Todos los elementos de la cola 2 " << (compararTodaLaCola(c2,c1) ? " si ":" no ") << "se encuentran en la cola 1";

    cout << endl << "Las colas " << (compararTodaLaCola(c2,c1) && compararTodaLaCola(c2,c1) ? " si ":" no ") << "se contienen mutuamente";

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

bool compararCola(Cola c1, Tipo vb){
    if(!c1.colaVacia()){

        if(vb==c1.quitar()){
            return true;
            
        }
        return compararCola(c1,vb);
    }
    return false;
}

bool compararTodaLaCola(Cola c1,Cola c2){
    //if(c1.tamanioCola()==c2.tamanioCola()){
        while(!c1.colaVacia()){
            if(!compararCola(c2,c1.quitar())){      //Hay un valor de c1 que no esta en c2 
                return false;
            }

        }
        return true;
    //}else{
      //  cout << endl << "No tienen la misma dimensio por lo tanto no se contienen mutuamente ";
    //}
}

