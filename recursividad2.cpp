
//programa que imprime un mensaje repetidamente


#include<iostream>
using namespace std;
#include "utilidades.h"

int main() {   //programa principal
system("color 01");
void imprimir_digito(int x); //Prototipos
int n;
std::cout <<endl<< "Ingrese el numero a procesar" << '\n';
n=leer_n(-32768,32768);//llamado a lectura de cantidad de repeticiones
imprimir_digito(n);
cout<<endl;
system ("pause");
  return 0;
}

void imprimir_digito(int x){ //implementacion de la funcion
  if ((x>10) || (x<-10)) {
    imprimir_digito(x/10);
  }
cout <<endl<< " >" <<x%10;
}
