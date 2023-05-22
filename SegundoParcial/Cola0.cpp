#include <iostream>
#include "Cola.h"
using namespace std;

int main(){
    system("color f0");

    Cola c1;

    cout << endl << "El TDA cola contiene el valor: " << c1.getFinal() << " en el atributo final";

    cout << endl << "El TDA"<<(c1.colaVacia()?" si ":" no ")<< "esta vacia";
    cout << endl << "El TDA"<<(c1.colaLlena()?" si ":" no ")<< "esta llena";

    cout << endl << "El TDA contiene "<<c1.tamanioCola()<< " elementos";
    c1.insentar(100);
    c1.insentar(200);
    cout << endl <<"";

    c1.quitar();
    cout << endl << "El TDA contiene "<<c1.tamanioCola()<< " elementos";
    // c1.setFinal(EXT-1);

    // cout << endl << "El TDA contiene "<<c1.tamanioCola()<< " elementos";





    cout<<endl;
    system("pause");
}