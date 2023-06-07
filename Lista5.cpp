//implemente un porrama que perimta el ilngrewso de vartios numeros y 


#include <iostream>
using namespace std;
#include "Lista.h"

#define FIN 0
#define EXT 9    // extension maxima de los vectores      

int main(){

    //
    void Ingresar_nums(int nums[], int *n1);       
    void ImprimirNumeros(int nums[], int n1, Lista lis[]);
    void GenerarListas(int nums[] , Lista lis[], int n1);
    //

    int nums[EXT];              //definicnio de vector ede numeros
    Lista listas[EXT];            //definicnion de vector e de listas de digitos 
    int n=0;                          // la cantidad de nuemros a ahcer el proceso
    Ingresar_nums(nums, &n);

    cout<<endl<<"El vector de numeros es: "<<endl;
    GenerarListas(nums, listas, n);
    ImprimirNumeros(nums, n, listas);

    cout << endl;
}

void Ingresar_nums(int nums[], int *n1){
    int aux;            //variable de lectura
    
    do{
        cout<<endl<<"Ingrese un numero entero, finaliza3e con "<<FIN<<" : "; cin>>aux;
        if((aux != FIN) && (*n1 < EXT )){       
            nums[*n1] = aux;
            (*n1)++;                            //Esto me devuelve la cantidad de valores del vector 
        }
    }
    while((aux != FIN) && (*n1 < EXT ));

}       

void ImprimirNumeros(int nums[], int n1, Lista lis[]){
    cout<<endl<<"VALORES PROCESADOS"<<endl;
    for (int i = 0; i < n1; i++){

        cout<<endl<<" > "<<nums[i]<<endl;
        Nodo* act;              //nodo actual de la lista
        act = lis[i].getPrimero();
        while (act != NULL){

            cout<<endl<<"\t > "<<act->getDato();
            act= act->getPunt();
        }
    }
}

void Lista_elem_no_rep(Lista l, Nodo* act){

    if(act != NULL){
        Nodo* val = act->getPunt();
        if(val->getDato() == act->getDato() ){
            act->setPunt(val->getPunt());
        }

        Lista_elem_no_rep(l, act);
    }
}

void GenerarListas(int nums[] , Lista lis[], int n1){
    int aux;                //individualizacion de digitos 

    for(int i =0; i< n1 ; i++){
        aux= nums[i];
        do{
            lis[i].insertarAlInicio(aux % 10);
            aux= aux/10;
        }
        while(aux != 0);

    }
}