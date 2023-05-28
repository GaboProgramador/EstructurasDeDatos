#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Función para buscar un elemento en un arreglo
bool search(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            return true;
        }
    }
    return false;
}

// Función para unir dos arreglos
void union_arrays(int arr1[], int n1, int arr2[], int n2, int result[], int& n3) {
    for(int i=0; i<n1; i++) {
        result[i] = arr1[i];
    }
    n3 = n1;
    for(int i=0; i<n2; i++) {
        if(!search(arr1, n1, arr2[i])) {
            result[n3] = arr2[i];
            n3++;
        }
    }
}

// Función para ordenar un arreglo por selección
void selection_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    int arr1[MAX_SIZE], n1, arr2[MAX_SIZE], n2, result[MAX_SIZE], n3;

    // Ingreso de datos del primer arreglo
    cout << "Ingrese la cantidad de elementos del primer arreglo: ";
    cin >> n1;
    cout << "Ingrese los elementos del primer arreglo: ";
    for(int i=0; i<n1; i++) {
        cin >> arr1[i];
    }

    // Ingreso de datos del segundo arreglo
    cout << "Ingrese la cantidad de elementos del segundo arreglo: ";
    cin >> n2;
    cout << "Ingrese los elementos del segundo arreglo: ";
    for(int i=0; i<n2; i++) {
        cin >> arr2[i];
    }

    // Cálculo de la unión de los arreglos
    union_arrays(arr1, n1, arr2, n2, result, n3);

    // Ordenamiento de la unión por selección
    selection_sort(result, n3);

    // Impresión de la unión ordenada
    cout << "La unión de los dos arreglos es: ";
    for(int i=0; i<n3; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
//Autor: Gabriel Jimenex 7182