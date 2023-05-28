//codigo de clase tranformado de forma recursiva\
//Gabriel JImenez 7182

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    system("color f0");
    //prototipos
    bool Palindromo(char f[]);
    bool Palindromo(char f[], int inicio, int fin);
    
    char f[15];
    cout << "Va a ingresar una cadena: ";
    cin.getline(f,15,'.'); // Lee una línea de caracteres
    
    cout << "La cadena es: " << f << endl;
    cout << "Esa cadena " << (Palindromo(f) ? "si" : "no") << " es un palindromo" << endl;
    
    system("pause");
    return 0;
}

bool Palindromo(char f[], int inicio, int fin) {
    if (inicio >= fin) {
        return true; // Caso base: si la subcadena tiene longitud 0 o 1, entonces es un palíndromo
    }
    
    if (f[inicio] != f[fin]) {
        return false; // Si los caracteres de los extremos no coinciden, la cadena no es un palíndromo
    }
    
    return Palindromo(f, inicio+1, fin-1); // Llama a la función recursivamente con la subcadena que excluye el primer y último carácter
}

bool Palindromo(char f[]) {
    int longitud = strlen(f);
    return Palindromo(f, 0, longitud-1);
}

