//programa que imprime un mensaje repetidamente


#include<iostream>
using namespace std;
#include "utilidades.h"

int main() {   //programa principal
system("color 01");
void imprimirmensaje(int x); //Prototipos
int n;

std::cout <<endl<< "Ingrese la cantidad de repeticiones" << '\n';
n=leer_n();//llamado a lectura de cantidad de repeticiones
imprimirmensaje(n);
cout<<endl;
system ("pause");
  return 0;
}

void imprimirmensaje(int x){ //implementacion de la funcion
  if (x>1) {
    imprimirmensaje(x-1);
  }
cout <<endl<< "Repeticion # " <<x<< " Hola mundo........." << '\n';
}
