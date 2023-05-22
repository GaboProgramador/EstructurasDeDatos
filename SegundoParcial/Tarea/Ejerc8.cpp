//Ingresar una frase y proceda a invertir el orden de las palabras, por medio del empleo de pilas
#include <iostream>
#include <string>
#include <sstream>
typedef string Tipo;   //Definicion del tipo de datos a almacenar en la pila
#define EXT 20
class Pila{     //Definicion de la pila
private:
    Tipo vec[EXT];      //Arreglo para almacenar los datos de la pila
    int top;        //Posicion que ocupa el elemento de la cima de la pila
public:
    Pila();     //Metodo constructor
    void setVec(Tipo v, int pos );      //Metod que actualiza el estado del atributo vec en la posicion pos
    void setTop(int v);         //Metodo que actualiza el estado del atributo top

    Tipo getVec(int pos);       //Definicion del metodo que devuelve el estado del atributo vec en la posicion pos
    int getTop();       //Defincion del metodo que devuelve el estado del atributo pos

    bool pilaVacia();       //Definicion del metodo que determina si la pila carece de elemtnos
    bool pilaLlena();       //Definicion del matodo que determina si la pila esta llena 
    void push(Tipo v);      //Definicion del metodo que inserta un elemtno en la pila
    Tipo pop();             //Definion del metodo que extrae un elemnto de la pila (top)
    void vaciarPila();      //Vacia una pila
    int tamanioPila(); 
    Tipo cimaPila();
};

    Pila::Pila(){
        setTop(-1);     //inicializa la pila guardando el como posicion del elemento cima el valor -1


    }     
    void Pila::setVec(Tipo v, int pos ){
        vec[pos]=v;
    }   
    void Pila::setTop(int v){
        top=v;      //Actuializa el valor en el atributo

    }        

    Tipo Pila::getVec(int pos){
        return vec[pos];//Devuelve el valor de la posicion

    }      
    int Pila::getTop(){
        return top;
    }   
    bool Pila::pilaVacia(){
        return (getTop()==-1);  //Devuelve verdade si top conserva el valor original
    }       
    bool Pila::pilaLlena(){
        return (getTop()==EXT-1);
    } 
    void Pila::push(Tipo v){
        if(!pilaLlena()){       //Aun hay espacion en la pila
            setTop(getTop()+1);
            setVec(v,getTop());     //Guarda el valor v en top

        }
    }    
    Tipo Pila::pop(){
        Tipo aux;       //Variable para almencar el valor de la posicion que ocupa
        if(!pilaVacia()){       //pila tiene elementos
            aux=getVec(getTop());       //almacena temporalmente el valor a devolver
            setTop(getTop()-1);         //decrementa la posicion
            return aux;     //Devolver el valor 
            

        }
        //return Tipo(); 

    }   
    void Pila::vaciarPila(){
        setTop(-1);
    }
    int Pila::tamanioPila(){
        return getTop()+1;
    }
    Tipo Pila::cimaPila(){
        Tipo aux;       //Variable para almencar el valor de la posicion que ocupa
        if(!pilaVacia()){       //pila tiene elementos
            aux=getVec(getTop());       //almacena temporalmente el valor a devolver
            return aux;     //Devolver el valor 
            

        }
        //return Tipo();
    }

using namespace std;

string invertirOrdenPalabras(const string& frase) {
    Pila pila;
    stringstream ss(frase);
    string palabra;
    string resultado;

    // Extraer las palabras de la frase y almacenarlas en la pila
    while (ss >> palabra) {
        pila.push(palabra);
    }

    // Construir la frase invertida uniendo las palabras desde la pila
    while (!pila.pilaVacia()) {
        resultado += pila.pop();
        if (!pila.pilaVacia()) {
            resultado += " ";
        }
    }

    return resultado;
}

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    string fraseInvertida = invertirOrdenPalabras(frase);

    cout << "Frase invertida: " << fraseInvertida << endl;

    return 0;
}