//Encontrar el máximo y mínimo elemento de una pila
#include <iostream>
#include "Pila.h"
using namespace std;



int main() {
    void encontrarMaximoMinimo(Pila& pila, Tipo& maximo, Tipo& minimo);

    Pila pila;

    // Agregar elementos a la pila
    pila.push(10);
    pila.push(5);
    pila.push(15);
    pila.push(8);
    pila.push(3);

    Tipo maximo, minimo;
    encontrarMaximoMinimo(pila, maximo, minimo);

    cout << "El máximo elemento de la pila es: " << maximo << endl;
    cout << "El mínimo elemento de la pila es: " << minimo << endl;

    return 0;
}

void encontrarMaximoMinimo(Pila& pila, Tipo& maximo, Tipo& minimo) {
    if (pila.pilaVacia()) {
        cout << "La pila está vacía." << endl;
        return;
    }

    maximo = pila.cimaPila();  // Inicializar el máximo con el elemento en la cima de la pila
    minimo = pila.cimaPila();  // Inicializar el mínimo con el elemento en la cima de la pila

    while (!pila.pilaVacia()) {
        Tipo elemento = pila.pop();

        if (elemento > maximo) {
            maximo = elemento;
        }

        if (elemento < minimo) {
            minimo = elemento;
        }
    }
}
