//Permitir el ingreso de una Pila de valores, y desplazar de sus valores N posiciones (considere valores positivos y negativos).
#include <iostream>
#include "Pila.h"

using namespace std;

void desplazarPila(Pila& pila, int n) {
    int tamanioPila = pila.tamanioPila();
    if (tamanioPila == 0) {
        return;  // No hay elementos en la pila
    }

    // Calcular el número real de posiciones a desplazar considerando el tamaño de la pila
    n = n % tamanioPila;

    if (n == 0) {
        return;  // No es necesario desplazar la pila
    }

    if (n < 0) {
        n = tamanioPila + n;  // Convertir un desplazamiento negativo a positivo equivalente
    }

    Pila pilaAux;
    for (int i = 0; i < n; i++) {
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

    int n;
    cout << "Ingrese la cantidad de posiciones a desplazar (positivo o negativo): ";
    cin >> n;

    desplazarPila(pila, n);

    cout << "Pila después del desplazamiento:" << endl;
    while (!pila.pilaVacia()) {
        cout << pila.pop() << " ";
    }
    cout << endl;

    return 0;
}
