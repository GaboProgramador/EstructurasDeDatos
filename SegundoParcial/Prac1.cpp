//PilaO.cpp
//Gestion basica de una TDA Pila
//Gabriel Jimenez 7182

#include <iostream>
#include "Pila.h"
using namespace std;

int main(){
    system("color f0");
    Pila p;

    cout<<endl<<"El valor del atributo top es: "<<p.getTop();

    cout<<endl<<"La pila "<<(p.pilaVacia()?"Si":"No")<<" esta vacia";
    cout<<endl<<"La pila "<<(p.pilaLlena()?"Si":"No")<<" esta llena";

    p.push(15);
    cout<<endl<<"La pila "<<(p.pilaVacia()?"Si":"No")<<" esta vacia";
    cout<<endl<<"La pila "<<(p.pilaLlena()?"Si":"No")<<" esta llena";

    cout<<endl<<"El valor extraido de la pila es: "<<p.pop();

    cout<<endl<<"La pila "<<(p.pilaVacia()?"Si":"No")<<" esta vacia";
    cout<<endl<<"La pila "<<(p.pilaLlena()?"Si":"No")<<" esta llena";
    cout<<endl<<"El valor extraido de la pila es: "<<p.pop();

    cout<<endl;
    system("pause");
}