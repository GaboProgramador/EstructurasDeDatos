#include <iostream>

// Función que realiza la búsqueda binaria
int binarySearch(int arr[], int target, int size) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Si no se encuentra el valor, se retorna -1
}

// Función que realiza el ordenamiento por selección
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// Función que encuentra el número más repetido en un arreglo
int findMostFrequent(int arr[], int size) {
    selectionSort(arr, size); // Ordenamos el arreglo para usar búsqueda binaria
    int mostFrequent = arr[0];
    int maxCount = 1;
    for (int i = 0; i < size - 1; i++) {
        int count = 1;
        while (i < size - 1 && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    return mostFrequent;
}

int main() {
    int size;
    std::cout << "Ingrese la cantidad de numeros enteros: ";
    std::cin >> size;
    
    // Leer los numeros enteros
    int arr[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Ingrese el numero entero #" << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    // Encontrar el valor más repetido
    int mostFrequent = findMostFrequent(arr, size);
    
    // Mostrar el valor más repetido
    std::cout << "El valor mas repetido es: " << mostFrequent << std::endl;
    
    return 0;
}
//Autor: Gabriel Jimenex 7182