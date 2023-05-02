#include<iostream>
using namespace std;
#include "utilidades.h"

int main() {   //programa principal
system("color 01");
void imprimir_digito(int x,int *suma,int *aux); //Prototipos
int n; int suma=0; int aux;
std::cout <<endl<< "Ingrese el numero a procesar" << '\n';
n=leer_n(-32768,32768);//llamado a lectura de cantidad de repeticiones
imprimir_digito(n,&suma,&aux);
std::cout <<endl<< "Sumatoria:" << suma<<endl;
cout<<endl;
if (aux==n) {
  std::cout << "Si es capicua" << '\n';
}else{
  std::cout << "No es capicua" << '\n';
}
system ("pause");
  return 0;
}

void imprimir_digito(int x,int *suma, int *aux){ //implementacion de la funcion
  *aux*=10;
  *aux+=x%10;
  if ((x>10) || (x<-10)) {
    imprimir_digito(x/10,suma,aux);
  }
cout <<endl<< " >" <<x%10;
*suma+=x%10;

}
