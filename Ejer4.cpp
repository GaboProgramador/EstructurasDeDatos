//4. Generar los N valores múltiplos de X. Calcular el promedio de aquellos valores generados que estén dentro del rango comprendido entre A y B; si no están en ese rango, los valores solo deberán imprimirse.
//Gabriel Jimenez 7182
#include <iostream>
using namespace std;

// Función para imprimir los n múltiplos de 6
void printMultiplesOf6(int n, int current) {
    if (n == 0) {
        return;
    }
    cout << current << " ";
    printMultiplesOf6(n - 1, current + 6);
}

// Función para obtener el promedio de los últimos a y b términos de la secuencia
double getAverage(int a, int b, int current, int sum, int count) {
    if (count == a + b) {
        return static_cast<double>(sum) / (a + b);
    }
    if (count >= a) {
        sum += current;
    }
    return getAverage(a, b, current + 6, sum, count + 1);
}

int main() {
    int n, a, b;
    cout << "Ingrese la cantidad de múltiplos de 6 que desea generar: ";
    cin >> n;
    cout << "Los " << n << " múltiplos de 6 son: ";
    printMultiplesOf6(n, 6);
    cout << endl;
    cout << "Ingrese el valor de a y b para promediar los últimos a y b términos de la secuencia: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    double average = getAverage(a, b, 6 * (n - b + 1), 0, 1);
    cout << "El promedio de los últimos " << a << " y " << b << " términos de la secuencia es: " << average << endl;
    return 0;
}