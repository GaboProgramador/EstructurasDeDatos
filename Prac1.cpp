#include <iostream>
#include <cmath>

// Función para contar el número de dígitos de un número entero
int contarDigitosEnteros(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

// Función para contar el número de dígitos de un número decimal
int contarDigitosDecimales(double numero) {
    int parte_entera = (int)numero;
    int contador = contarDigitosEnteros(parte_entera);
    double parte_decimal = numero - parte_entera;
    if (parte_decimal == 0) {
        return contador;
    } else {
        int exponente = 1;
        while (parte_decimal * pow(10, exponente) != parte_decimal * pow(10, exponente-1)) {
            contador++;
            exponente++;
        }
        return contador + 1; // Se suma 1 por el punto decimal
    }
}

int main() {
    int numero_entero;
    double numero_decimal;

    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero_entero;
    std::cout << "El numero entero " << numero_entero << " tiene " << contarDigitosEnteros(numero_entero) << " digitos." << std::endl;

    std::cout << "Ingrese un numero decimal: ";
    std::cin >> numero_decimal;
    std::cout << "El numero decimal " << numero_decimal << " tiene " << contarDigitosDecimales(numero_decimal) << " digitos." << std::endl;

    return 0;
}