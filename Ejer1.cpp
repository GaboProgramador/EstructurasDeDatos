//1. Calcular el Factorial de cada número ingresado
//Gabriel Jimenez 7182
#include<iostream>
using namespace std;

#include "leerN.h"

int main(){
    system("color f0");
    //Prototipo
    
    void ingresarNum(int n);
    int n,res;
    cout<<endl<<"Programa que busca el factorial de N numeros";
    n = Leer_N();
    ingresarNum(n);

   
    cout<<endl;
    system("pause");
    return 0;


}
void ingresarNum(int n){
    int fac(int );      //Prototipo
    int a,result;
    if(n>0){
        cout<<endl<<"Ingrese el numero para sacar su factorial: ";
        cin>>a;
        if(a<0){
            cout<<endl<<"Numero invalido...";
            ingresarNum(n-1);
        }
        result=fac(a);
         cout<<endl<<"El resultado del factorial es: "<<result;
        ingresarNum(n-1);

    }

}

int fac(int a){
    if (a < 0) {
        return -1;
    }
    else if (a == 0) {
        return 1;
    }
    else {
        return a * fac(a-1);
    }

}
