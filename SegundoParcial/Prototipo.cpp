#include <iostream>
using namespace std;

class ColaCircular {
private:
    int capacidad;
    int frente;
    int final;
    int* cola;

public:
    ColaCircular(int capacidad) {
        this->capacidad = capacidad + 1; 
        this->frente = 0;
        this->final = 0;
        this->cola = new int[this->capacidad];
    }

    ~ColaCircular() {
        delete[] cola;
    }

    void encolar(int elemento) {
        if (esLlena()) {
            throw "La cola está llena";
        }
        cola[final] = elemento;
        final = (final + 1) % capacidad;
    }

    int desencolar() {
        if (esVacia()) {
            throw "La cola está vacía";
        }
        int elemento = cola[frente];
        frente = (frente + 1) % capacidad;
        return elemento;
    }

    int frenteCola() {
        if (esVacia()) {
            throw "La cola está vacía";
        }
        return cola[frente];
    }

    bool esVacia() {
        return frente == final;
    }

    bool esLlena() {
        return (final + 1) % capacidad == frente;
    }
};

class Pila {
private:
    struct Nodo {
        int dato;
        Nodo* siguiente;
    };

    Nodo* cima;

public:
    Pila() {
        cima = nullptr;
    }

    ~Pila() {
        while (!esVacia()) {
            pop();
        }
    }

    void push(int elemento) {
        Nodo* nuevoNodo = new Nodo;
        nuevoNodo->dato = elemento;
        nuevoNodo->siguiente = cima;
        cima = nuevoNodo;
    }

    int pop() {
        if (esVacia()) {
            throw "La pila está vacía";
        }
        int elemento = cima->dato;
        Nodo* nodoEliminar = cima;
        cima = cima->siguiente;
        delete nodoEliminar;
        return elemento;
    }

    int cimaPila() {
        if (esVacia()) {
            throw "La pila está vacía";
        }
        return cima->dato;
    }

    bool esVacia() {
        return cima == nullptr;
    }
};

bool esCapicua(int numero) {
    ColaCircular cola(10);
    Pila pila;

    // Insertar cada dígito del número en la cola y la pila
    while (numero > 0) {
        int digito = numero % 10;
        cola.encolar(digito);
        pila.push(digito);
        numero /= 10;
    }

    // Comparar los dígitos de la cola con los dígitos de la pila
    while (!cola.esVacia()) {
        int digitoCola = cola.desencolar();
        int digitoPila = pila.pop();

        if (digitoCola != digitoPila) {
            return false;
        }
    }

    return true;
}

int main() {
    int cantidadNumeros;
    cout << "Ingrese la cantidad de números a verificar: ";
    cin >> cantidadNumeros;

    for (int i = 0; i < cantidadNumeros; i++) {
        int numero;
        cout << "Ingrese el número #" << (i + 1) << ": ";
        cin >> numero;

        if (esCapicua(numero)) {
            cout << "El número es capicúa" << endl;
        } else {
            cout << "El número no es capicúa" << endl;
        }
    }

    return 0;
}