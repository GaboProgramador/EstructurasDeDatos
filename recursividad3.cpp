#include<iostream>
using namespace std;
#include "utilidades.h"

int main() {   //programa principal
system("color 01");
int imprimir_digito(int x,int suma); //Prototipos
int n; int suma=0;
std::cout <<endl<< "Ingrese el numero a procesar" << '\n';
n=leer_n(-32768,32768);//llamado a lectura de cantidad de repeticiones
suma=imprimir_digito(n,suma);
std::cout <<endl<< "Sumatoria:" << suma;
cout<<endl;
system ("pause");
  return 0;
}

int imprimir_digito(int x,int suma){ //implementacion de la funcion
  if ((x>10) || (x<-10)) {
    suma=imprimir_digito(x/10,suma);
  }
cout <<endl<< " >" <<x%10;
suma=suma+x%10;
return suma;
}
