#include <iostream>
#include "Lista.h"

#define FIN 0
#define EXT 9

using namespace std;

void Ingresar_nums(int nums[], int *n1);       
void ImprimirNumeros(int nums[], int n1, Lista lis[]);
void GenerarListas(int nums[], Lista lis[], int n1);
float CalcularPromedioRecursivo(Nodo* act, int suma, int contador);
float CalcularPromedio(Lista lis);

int main() {
    int nums[EXT];
    Lista listas[EXT];
    int n = 0;

    Ingresar_nums(nums, &n);

    cout << endl << "El vector de numeros es:" << endl;
    GenerarListas(nums, listas, n);

    ImprimirNumeros(nums, n, listas);

    cout << endl;

    return 0;
}

void Ingresar_nums(int nums[], int *n1) {
    int aux;

    do {
        cout << endl << "Ingrese un numero entero, finalice con " << FIN << ": ";
        cin >> aux;

        if ((aux != FIN) && (*n1 < EXT)) {
            nums[*n1] = aux;
            (*n1)++;
        }
    } while ((aux != FIN) && (*n1 < EXT));
}

void ImprimirNumeros(int nums[], int n1, Lista lis[]) {
    cout << endl << "VALORES PROCESADOS" << endl;

    for (int i = 0; i < n1; i++) {
        cout << endl << " > " << nums[i] << endl;
        Nodo* act = lis[i].getPrimero();

        while (act != nullptr) {
            cout << endl << "\t > " << act->getDato();
            act = act->getPunt();
        }

        cout << "\t Promedio: " << CalcularPromedio(lis[i]) << endl;
    }
}

void GenerarListas(int nums[], Lista lis[], int n1) {
    int aux;

    for (int i = 0; i < n1; i++) {
        aux = nums[i];

        do {
            lis[i].insertarAlInicio(aux % 10);
            aux = aux / 10;
        } while (aux != 0);
    }
}

float CalcularPromedioRecursivo(Nodo* act, int suma, int contador) {
    if (act == nullptr) {
        if (contador > 0) {
            return static_cast<float>(suma) / contador;
        } else {
            return 0.0;
        }
    }

    suma += act->getDato();
    contador++;

    return CalcularPromedioRecursivo(act->getPunt(), suma, contador);
}

float CalcularPromedio(Lista lis) {
    return CalcularPromedioRecursivo(lis.getPrimero(), 0, 0);
}