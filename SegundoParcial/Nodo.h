//Definicion de la calse que origina cada elemento de una lista SIMPLE
#ifndef _NODO_H
#define _NODO_H
#include <cstddef>

typedef int Tipo;

class Nodo{                 //Definicion de la clase
private:
    Tipo dato;              //Atributo para contener el valor a almacenar
    Nodo* punt;             //Atributo para apuntar al siguiente nodo

public:                     //Metodos puclicos
    Nodo();                 //constructor
    Nodo(Tipo v);
    Nodo(Tipo v, Nodo* p);
    void setDato(Tipo v);   //metodo para actualizar el estado de v
    Tipo getDato();
    void setPunt(Nodo* v);
    Nodo* getPunt();
};
Nodo::Nodo(){
    setPunt(NULL);
}
Nodo::Nodo(Tipo v){
    setDato(v);
    setPunt(NULL);
}  
Nodo::Nodo(Tipo v, Nodo* p){
    setDato(v);
    setPunt(p);
}
void Nodo::setDato(Tipo v){
    dato = v;
}
Tipo Nodo::getDato(){
    return dato;
}
void Nodo::setPunt(Nodo* v){
    punt = v;
}
Nodo* Nodo::getPunt(){
    return punt;  
}

#endif