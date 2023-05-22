//Calcular el promedio de los elementos que ocupan las posiciones centrales de una pila

#include <iostream>
#include "Pila.h"  // Reemplaza "nombre_de_tu_archivo_de_cabecera.h" con el nombre real del archivo de cabecera

int main() {
    Pila pila;
    int numElementos;
    std::cout << "Ingrese el número de elementos para la pila: ";
    std::cin >> numElementos;

    // Insertar elementos en la pila
    for (int i = 0; i < numElementos; i++) {
        int elemento;
        std::cout << "Ingrese el elemento " << i + 1 << ": ";
        std::cin >> elemento;
        pila.push(elemento);
    }

    // Calcular el promedio de los elementos en las posiciones centrales
    int tamanioPila = pila.tamanioPila();
    int posInicial = (tamanioPila - 1) / 2;  // Posición inicial de los elementos centrales
    int posFinal = posInicial;
    if (tamanioPila % 2 == 0) {
        posFinal++;  // Incrementar la posición final si el tamaño de la pila es par
    }

    int suma = 0;
    int contador = 0;
    for (int i = posInicial; i <= posFinal; i++) {
        int elemento = pila.getVec(i);
        suma += elemento;
        contador++;
    }

    if (contador > 0) {
        float promedio = static_cast<float>(suma) / contador;
        std::cout << "El promedio de los elementos en las posiciones centrales es: " << promedio << std::endl;
    } else {
        std::cout << "La pila no tiene elementos en las posiciones centrales." << std::endl;
    }

    return 0;
}