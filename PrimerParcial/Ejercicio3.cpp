#include <iostream>

// Función para encontrar los factores primos de un número
void factorizar(int num) {
    std::cout << "Los factores primos de " << num << " son: ";

    // Buscar los factores primos del 2 al número mismo
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            std::cout << i << " ";
            num /= i;
        }
    }

    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    // Pedir al usuario que ingrese los números y encontrar sus factores primos
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Ingrese un numero: ";
        std::cin >> num;
        factorizar(num);
    }

    return 0;
}
//Autor: Gabriel Jimenex 7182