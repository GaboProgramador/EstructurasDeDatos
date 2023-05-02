//programa principal para gestion del TDA vector
#include <iostream>
using namespace std;
#include "Vector.h"

int main() {
  system("color 01");
  Vector v; //instanciar la clase vector
  v.setN(5);//definir la cantidad de elementos del vector
  v.leer();// ingresar valores para cada elemento del vector
  cout<<endl<<"Contenido del vector";
  v.imprimir();
  cout<<endl<<"Busqueda de un valor";
  if (v.buscar(7)==-1) {
    cout<<"El valor 7 no consta en el vector"<<endl;
  }else{
    std::cout <<endl <<"El valor 7 si consta en el vector" << '\n';
  }
  std::cout << "El vector ordenado es" << '\n';
  v.bublesort();
  return 0;
}
