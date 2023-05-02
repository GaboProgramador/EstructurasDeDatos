#include <iostream>
#include <cmath>
#include <stdlib.h>

// Función que determina si un número tiene una cantidad impar de dígitos
bool tieneCantidadImparDigitos(int n) {
    int cantidad = 0;
    while (n != 0) {
        cantidad++;
        n /= 10;
    }
    return cantidad % 2 != 0;
}

// Función que realiza el ordenamiento por inserción de forma descendente
void ordenarDescendente(int* lista, int n) {
    for (int i = 1; i < n; i++) {
        int valor = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] < valor) {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = valor;
    }
}

// Función principal
int main() {
    setlocale(LC_ALL, "");
    int* numeros;
    int n;
    std::cout << "Ingrese la cantidad de números que desea ingresar: ";
    std::cin >> n;
    numeros = new int[n];
    std::cout << "Ingrese los números:" << std::endl;
    for (int i = 0; i < n; i++) {
        int numero;
        std::cin >> numero;
        if (tieneCantidadImparDigitos(numero)) {
            numeros[i] = numero;
        }
    }
    ordenarDescendente(numeros, n);
    std::cout << "Los números con cantidad impar de dígitos ordenados de forma descendente son:" << std::endl;
    for (int i = 0; i < n; i++) {
        if (numeros[i] != 0) {
            std::cout << numeros[i] << std::endl;
        }
    }
    delete[] numeros;
    return 0;
}
//Autor: Gabriel Jimenex 7182