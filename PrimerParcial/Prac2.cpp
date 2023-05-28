//Manejo basico de un vector de numeros enteros
//Gabriel Jimenez 7182

#include<iostream>
#define EXT 10//definicion de la extension del arreglo
using namespace std;

int main(){//funcion principal
    system("color f0");//color de pantalla

    int A[EXT];
    int n;//cantidad de valores a procesar

    int leerN(int limInf,int limSup );//propotipo de la funcion que ingresa cantidad de valores 


    cout<<endl<<"Cantidad de valores a procesar";

    n=leerN(1,EXT);

    void leerArreglo(int *z,int n1);//void leerArreglo(int *z,int n1); declarado como apuntador
    leerArreglo(A,n);

    void imprimirArreglo(int z[],int n1);
    imprimirArreglo(A,n);
/*
    void insertar(int z[],int *n);
    insertar(A,&n);
    imprimirArreglo(A,n);

    void eliminar(int z[],int *n);
    eliminar(A,&n);
    imprimirArreglo(A,n);

    void eliminarVal(int z[],int *n);
    eliminarVal(A,&n);
    imprimirArreglo(A,n);
*/
    int buscarBinaria(int v,int z[],int n);
    int enc=buscarBinaria(10,A,n);

    cout<<endl<<"El valor 10 "<<((enc>=0)?"Si ":"No ")<<"se encuentra en el vector"<<endl; //operador ternario :)
/*    
    if(enc>=0){
        cout<<endl<<":], El valor 10 se encuentra en la posicion "<<enc<<endl;

    }else{
        cout<<endl<<":[,El valor no se encuentra este vectos "<<endl;
    }
*/    
    system("pause");//pulse una tecla para continuar
}

int leerN(int limInf,int limSup ){
    int x;
    do{
        cout<<endl<<"Ingrese el valor entero comprendido en el rango ["<<limInf<<".."<<limSup<<"] ";
        cin>>x;
    }while((x<limInf)||(x>limSup));//repite por verdadero
    return x;

}

void leerArreglo(int *z,int n1){
    cout<<"Ingreso de valores al arreglo "<<endl;
    for(int i=0;i<n1;i++){
        cout<<endl<<"Posicion ["<<i<<"] : ";
        cin >> *z++;
    }
}   
void imprimirArreglo(int z[],int n1){

    cout<<"Contenido del arreglo "<<endl;
    for(int i=0;i<n1;i++){
        cout<<endl<<"Posicion ["<<i<<"] : "<<z[i]<<endl;
    }
} 

void insertar(int z[],int *n){

    int val,pos;
    cout<<endl<<"Insercion de un nuevo elemento en el arreglo";
    cout<<endl<<"Ingrese el nuevo valor";
    cin>>val;

    cout<<endl<<"Ingrese la posicion donde quiere ingresar el nuevo valor";
    pos=leerN(0,*n-1);

    for(int i=*n;i>=pos;i--){

        z[i]=z[i-1];


    }
    z[pos]=val;
    *n=*n+1;

}

void eliminar(int z[],int *n){

    int pos;
    cout<<endl<<"Eliminar elemento en el arreglo";

    cout<<endl<<"Ingrese la posicion donde quiere eliminar el valor";
    pos=leerN(0,*n-1);

    for(int i=pos;i<=*n-1;i++){

        z[i]=z[i+1];


    }
    *n=*n-1;

}

void eliminarVal(int z[],int *n){
    int buscar(int v,int z[],int n);
    int pos,val;
    cout<<endl<<"Ingrese el valor a eliminar ";
    cin>>val;

    pos=buscar(val,z,*n);

    if (pos!= -1 ){
        for(int i=pos;i<=*n-1;i++){
            z[i]=z[i+1];
        }
        *n=*n-1;
    }
}

int buscar(int v,int z[],int n){

    for(int i=0;i<n;i++){

        if(v==z[i]){
            return i;
        }

    }
    return -1;
}

int buscarBinaria(int v,int z[],int n){//Busqueda Binaria
    int ini,fin,med;
    ini=0;
    fin=n-1;//Posicion final del arreglo

    while(ini<=fin){
        med=(ini+fin)/2;
        if(z[med]==v){
            return med;

        }else{
            if(z[med]>v){
                fin=med-1;
            }else{
                ini=med+1;
            }
        }

    }
    return -1;
}




