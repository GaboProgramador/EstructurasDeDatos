//Calcular la suma de los elementos de una pila
#include <iostream>
#include "Pila.h"

using namespace std;

int sumarElementosPila(Pila& pila);

int main() {
    Pila pila;

    // Agregar elementos a la pila
    pila.push(10);
    pila.push(5);
    pila.push(15);
    pila.push(8);
    pila.push(3);

    int suma = sumarElementosPila(pila);

    cout << "La suma de los elementos de la pila es: " << suma << endl;

    return 0;
}

int sumarElementosPila(Pila& pila) {
    int suma = 0;

    while (!pila.pilaVacia()) {
        int elemento = pila.pop();
        suma += elemento;
    }

    return suma;
}
