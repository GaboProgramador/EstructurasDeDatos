//Intercambiar, por parejas, los elementos de una pila previamente ingresada (primero con segundo, tercero con cuarto, etc.).
#include <iostream>
#include "Pila.h"

using namespace std;

void intercambiarParejasPila(Pila& pila);

int main() {
    Pila pila;

    // Agregar elementos a la pila
    pila.push(10);
    pila.push(5);
    pila.push(15);
    pila.push(8);
    pila.push(3);
    pila.push(7);

    cout << "Pila original: ";
    while (!pila.pilaVacia()) {
        cout << pila.pop() << " ";
    }
    cout << endl;

    // Agregar nuevamente los elementos a la pila
    pila.push(10);
    pila.push(5);
    pila.push(15);
    pila.push(8);
    pila.push(3);
    pila.push(7);

    intercambiarParejasPila(pila);

    cout << "Pila con elementos intercambiados: ";
    while (!pila.pilaVacia()) {
        cout << pila.pop() << " ";
    }
    cout << endl;

    return 0;
}

void intercambiarParejasPila(Pila& pila) {
    Pila pilaAux;

    while (!pila.pilaVacia() && !pila.pilaLlena()) {
        int elemento1 = pila.pop();
        int elemento2 = pila.pop();

        pilaAux.push(elemento2);
        pilaAux.push(elemento1);
    }

    // Si la pila original tenía un número impar de elementos, se agrega el elemento restante a la pilaAux
    if (!pila.pilaVacia()) {
        pilaAux.push(pila.pop());
    }

    // Volver a agregar los elementos a la pila original
    while (!pilaAux.pilaVacia() && !pilaAux.pilaLlena()) {
        pila.push(pilaAux.pop());
    }
}
