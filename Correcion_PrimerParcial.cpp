#include <iostream>
using namespace std;
#include "utilidades.h"
int main(){
system("color fc");
int n;
void ingresarNums(int n, int i); //prototipo de funcion ingreso de valores
n = leerN(1,1000); //lectura cantidad de valores a procesar
ingresarNums(n, 1); //llamado a funcion de ingreso de valores
cout << endl;
system("pause");
}
void ingresarNums(int n, int i){ //prototipo de funcion ingreso de valores
int a, b; //variables para base y exponente
void calcularExponente(int a, int b, int *exp); //prototipo de la funcion que calcula el exponente
cout << endl << "Valor de la base: "; //lectura
a = leerN(1,1000);
cout << endl << "Valor del exponente: ";
b = leerN(1,1000);
int exp = 1; //var para contener respuesta de exponente
calcularExponente(a, b, &exp);
cout << endl << "El valor calculado de " << a << " elevado a la " << b << " es: " << exp;
if (i < n){ //aun se puede repetir proceso
ingresarNums(n, i+1); //llamado recursivo
}
}
void calcularExponente(int a, int b, int *exp){ //funcion que calcula el exponente
void calcularProducto(int c, int d, int *prod); //prototipo funcion calcula un producto por medio de sumas
int prod = 0; //inicializa acumulador
calcularProducto(*exp, a, &prod); //multiplicar a por a, b veces
*exp = prod; //actualiza resultado parcial
if (b > 1){ //aun se debe hacer llamado recursivo
calcularExponente(a, b-1, exp); //llamado
}
}
void calcularProducto(int c, int d, int *prod){ //funcion que calcula un producto por medio de sumas
*prod = *prod + c; //acumulacion
if (d > 1) { //aun no es la ultima repeticion
calcularProducto(c, d-1, prod); //llamado a siguiente calculo recursivo
}
}
