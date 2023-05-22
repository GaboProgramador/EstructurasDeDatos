#include <iostream>
#include "Pila.h"
using namespace std;

void leerPila(Pila *p1);     
void imprimirPila(Pila p1); 
bool compararPilas(Pila pilas[], int n); 

int main(){
    system("color f0");
    int n;
    cout << "Ingrese la cantidad de pilas a comparar: ";
    cin >> n;

    Pila pilas[n];
    for(int i=0; i<n; i++){
        cout << endl << "PILA " << i+1;
        leerPila(&pilas[i]);
        imprimirPila(pilas[i]);
    }

    cout<<endl<<"Las pilas ingresadas "<<(compararPilas(pilas, n)?"SI":"NO")<<" son iguales ";

    cout<<endl;
    system("pause");
}

void leerPila(Pila *p1){
    Tipo fin=77777;
    Tipo aux;
    do{
        cout<<endl<<"Ingrese un valor a apilar. Finalice con "<<fin<<": ";
        cin>>aux;
        if(aux!=fin){ 
            if(!p1->pilaLlena()){
                p1->push(aux);
            }else{
                cout<<endl<<"Ya hasta ahi nomas :D ";
                aux=fin;
            }
        }
    }while(aux!=fin);
}

void imprimirPila(Pila p1){
    Tipo aux;
    cout<<endl<<"Elemtos de la pila: ";
    cout<<endl<<"=====================";
    cout<<endl<<"No. Elemntos: "<<p1.tamanioPila();
    while(!p1.pilaVacia()){
        aux=p1.pop();
        cout<<endl<<">  "<<aux<<endl;
    }
}

bool compararPilas(Pila pilas[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(pilas[i].tamanioPila() != pilas[j].tamanioPila()){
                return false;
            }
            Pila p1 = pilas[i];
            Pila p2 = pilas[j];
            while(!p1.pilaVacia()){
                if(p1.pop() != p2.pop()){
                    return false;
                }
            }
        }
    }
    return true;
}