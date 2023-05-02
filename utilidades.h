//archivo de cabecera con utilidades generales

int leer_n(int li,int ls){ // implementacion de lectura de cantidad de repeticiones
  int aux; //variable de lectura
  do { //ciclo de lectura
    std::cout <<endl<< "Ingrese un valor entero positivo: "<<endl;
    cin>>aux;
  } while((aux<li)||(aux>ls)); //rechazar balores negativos y cero
  return aux;
}
