//Insertar N elementos en las posiciones centrales de una pila

#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    Pila pila;
    int numElementos;
    cout << "Ingrese el número de elementos para insertar en la pila: ";
    cin >> numElementos;

    if (numElementos <= 0) {
        cout << "El número de elementos debe ser mayor que cero." << endl;
        return 0;
    }

    int tamanioPila = pila.tamanioPila();
    int posInicial = (tamanioPila - 1) / 2;  // Posición inicial de las posiciones centrales
    int posFinal = posInicial;
    if (tamanioPila % 2 == 0) {
        posFinal++;  // Incrementar la posición final si el tamaño de la pila es par
    }

    for (int i = 0; i < numElementos; i++) {
        int elemento;
        cout << "Ingrese el elemento " << i + 1 << " para insertar en la pila: ";
        cin >> elemento;

        // Insertar el elemento en la posición central de la pila
        pila.push(elemento);

        // Mover los elementos a la derecha de las posiciones centrales
        for (int j = pila.tamanioPila() - 1; j > posFinal + 1; j--) {
            int temp = pila.getVec(j - 1);
            pila.setVec(temp, j);
        }

        // Insertar el elemento en la posición final de las posiciones centrales
        pila.setVec(elemento, posFinal + 1);
    }

    cout << "Elementos insertados en las posiciones centrales de la pila:" << endl;
    for (int i = posInicial; i <= posFinal; i++) {
        int elemento = pila.getVec(i);
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}

