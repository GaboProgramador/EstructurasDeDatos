//Implementa la gestion basica de nodos de una lista
using namespace std;
#include <iostream>
#include "Nodo.h"

int main (){
    system("color 0f");

    Nodo n;                              //contructor por defecto
    Nodo n1(104);                       //contructor conociendo el valor a almacenar
    Nodo n2(103,&n1);                  //costructor conociendo el valor a almacenar y la direccion

    n.setDato(105);
    cout << endl << "El valor almacenado en el nodo es: " << n.getDato();
    cout << endl << "El valor que apunta el nodo es: " << n.getPunt();

    cout << endl << "El valor almacenado en el segundo nodo es: " << n1.getDato();
    cout << endl << "El valor que apunta el nodo es: " << n1.getPunt();

    cout << endl << "El valor almacenado en el tercer nodo es: " << n2.getDato();
    cout << endl << "El valor que apunta el nodo es: " << n2.getPunt();

    n1.setPunt(&n);

    Nodo* aux;          //Variable que permite recorrer la lista
    aux = &n2;
    cout << endl << "> "<< aux -> getDato();
    aux = n2.getPunt();
    cout << endl << "> "<< aux -> getDato();
    aux = n1.getPunt();
    cout << endl << "> "<< aux -> getDato();


    cout<<endl;
    system("pause");
}
