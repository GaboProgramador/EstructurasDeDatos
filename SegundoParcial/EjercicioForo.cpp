#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include "Pila.h"

using namespace std;

void ordenarPalabrasEnFrase(const string& frase);

int main() {
    string frase;

    cout << "Ingrese una frase: ";
    getline(cin, frase);

    cout << "Frase original: " << frase << endl;
    ordenarPalabrasEnFrase(frase);

    return 0;
}

void ordenarPalabrasEnFrase(const string& frase) {
    istringstream iss(frase);
    string palabra;
    Pila pila;

    while (iss >> palabra) {
        pila.push(palabra);
    }

    cout << "Frase ordenada: ";
    while (!pila.pilaVacia()) {
        cout << pila.pop() << " ";
    }
    cout << endl;
}
