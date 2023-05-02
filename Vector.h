//TDA VECTOR
#define EXT 20
class Vector {  //definicion de la clase
private:
  int n;//dimension del vector
  int vec[EXT];

public:
  Vector(){  //metodo constructor
    setN(0);
  }
  void setN(int val) { //metodo que modifica el estado del atributo N
    n=val;
  }
  void setVec(int val,int pos) { //metodo que modifica el estado del atributo VEC
    vec[pos]=val;
  }
  int getN(){ //metodo que devuelve estado del atributo N
    return n;
  }
  int getVec(int pos){ //metodo que devuelve estado del atributo vec
    return vec[pos];
  }
  void leer() {
    int aux; //variable de lectura
    for (int i = 0; (i < getN()); i++) { //ciclo del recorrido del vector
      cout<<endl<<"Ingrese un valor para la posicion: ["<<i<<"]: " ;
      cin>>aux;
      setVec(aux,i);//actualizar el arreglo
    }
  }
  void imprimir() {
    for (int i = 0; (i < getN()); i++) { //ciclo del recorrido del vector
      cout<<endl<<"Valor almacenado en la posicion: ["<<i<<"]: "<<getVec(i);//actualizar el arreglo
    }
  }
  int buscar(int val) {
    for (int i = 0; (i < getN()); i++) { //ciclo del recorrido del vector
      if (getVec(i)==val) {
        return i;
      }
  }
  return -1;
 }
 void bublesort(int n) {
   int aux,i=0;
 for (int i=0; i<getN()-1; i++){
  for (int j=i+1; j<getN(); j++){
   if(getVec(i)>getVec(j)){
    aux = getVec(i);
    getVec(i) = getVec(j);
    getVec(j) = aux;
   }
 }
}
 }
};
