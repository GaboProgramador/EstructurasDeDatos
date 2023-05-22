//Permitir el ingreso de una pila de valores, proceder a intercalar sus valores de inicio y final (primero, último, segundo, penúltimo, tercero, antepenúltimo, etc.)
#include <iostream>
#include "Pila.h"

using namespace std;

void intercalarValores(Pila& pila) {
    Pila pilaAux;
    int tamanioPila = pila.tamanioPila();
    int mitad = tamanioPila / 2;

    for (int i = 0; i < mitad; i++) {
        pilaAux.push(pila.pop());
    }

    if (tamanioPila % 2 != 0) {
        pilaAux.push(pila.pop());
    }

    while (!pilaAux.pilaVacia()) {
        pila.push(pilaAux.pop());
    }

    for (int i = 0; i < mitad; i++) {
        int valorFinal = pila.pop();
        int valorInicial = pila.pop();
        pilaAux.push(valorInicial);
        pilaAux.push(valorFinal);
    }

    if (tamanioPila % 2 != 0) {
        pilaAux.push(pila.pop());
    }

    while (!pilaAux.pilaVacia()) {
        pila.push(pilaAux.pop());
    }
}

int main() {
    Pila pila;
    int numElementos;
    cout << "Ingrese el número de elementos para la pila: ";
    cin >> numElementos;

    for (int i = 0; i < numElementos; i++) {
        int elemento;
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> elemento;
        pila.push(elemento);
    }

    intercalarValores(pila);

    cout << "Pila después de intercalar los valores:" << endl;
    while (!pila.pilaVacia()) {
        cout << pila.pop() << " ";
    }
    cout << endl;

    return 0;
}
