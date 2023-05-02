//Definir un TDA vector
//Gabriel Jimenez 7182

typedef int Tipo;       //Crear tipo basde de datos para el arreglo
#define EXT 15


class vector{       //Definicion de la clase vector 
private:
    Tipo v[EXT];     //Declaracion del atributovector
    int numEle;     //Numero de elementos ocupados en el vector

public:
    vector();       //contructor
    //metodo sets
    void setV(Tipo val,int pos);
    void setNumEle(int val);        //metodo que actualiza estado del atributo numEle   
    //metodo gets 
    Tipo getV(int pos);
    int getNumEle();
    ~vector();

};
vector::vector(){//oprecion de resolucion de ambito

}
void vector::setV(Tipo val,int pos){
    v[pos]=val;
}
void vector::setNumEle(int val){
    numEle=val;
}
Tipo vector::getV(int pos){
    return v[pos];
}
int vector::getNumEle(){
    return numEle;
}
vector::~vector(){
    
}