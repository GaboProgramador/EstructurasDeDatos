//2. Generar el área de los círculos cuyo radio está comprendido entre los valores A y B
//Gabriel Jimenez 7182

#include <iostream>
using namespace std;
#define PI 3.14
#include "leerN.h"


int main(){
    system("color f0");
    //Prototipo
    int ingresarAB(int n);
    int n;
    
    cout<<endl<<"Programa que busca el area de N circulos";
    n=Leer_N();
    ingresarAB(n);
    cout<<endl;
    system("pause");
    return 0;


}
int ingresarAB(int n){
    float area(int a,int b);
    int a,b;
    float res;
    if(n>0){
        cout<<endl<<"Ingrese los puntos: ";
        cout<<endl<<"A: ";
        cin>>a;
        cout<<endl<<"B: ";
        cin>>b;
        res= area(a,b);
        cout<<endl<<"El area de ese circulo es: "<<res;
        ingresarAB(n-1);
    }


}
float area(int a,int b){
    int radio;
    radio=b-a;
    float res;
    res=PI*(radio*radio);
    return res;


}