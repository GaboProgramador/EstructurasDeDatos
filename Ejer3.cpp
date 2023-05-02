//3. Ingresar tres números, y proceder a ordenarlos (ascendente o descendentemente, de acuerdo a lo requerido por el usuario)
//Gabriel Jimenez 7182

#include <iostream>
using namespace std;

#include "leerN.h"

int main(){
    system("color f0");
    //Prototipo
    int ingresar3N(int n);
    int n;
    
    cout<<endl<<"Programa que ordena 3 numeros ascendente o descendentemente" ;
    n=Leer_N();
    ingresar3N(n);
    cout<<endl;
    system("pause");
    return 0;


}
int ingresar3N(int n){
    int ordenAsc(int &a,int &b,int&c); 
    int ordenDesc(int &a,int &b,int&c);     //Prototipo
    int a, b, c;
    if(n>0){
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    cout<<endl;
    int opc;
    cout<<endl<<"Desea ordenarlos: ";
    cout<<endl<<"1.Ascendentemente: ";
    cout<<endl<<"2.Descendentemente: ";
    cout<<endl;
    cin>>opc;
    if(opc==1){
        ordenAsc(a,b,c);
    }
    if(opc==2){
        ordenDesc(a,b,c);
    }
    }
    
    
    ingresar3N(n-1);
    

}
int ordenAsc(int &a,int &b,int&c){
    void intercambio(int &a,int&b);     //Prototipo
    if(a>b){
        intercambio(a,b);
    }
    if(b>c){
        intercambio(b,c);
    }
    if(a>b){
        intercambio(a,b);
    }
    cout<<endl<< "Los numeros ordenados ascendentemente son: " << a << ", " << b << ", " << c<<endl;

}
int ordenDesc(int &a,int &b,int&c){
    void intercambio(int &a,int&b);     //Prototipo
    if(a<b){
        intercambio(a,b);
    }
    if(b<c){
        intercambio(b,c);
    }
    if(a<b){
        intercambio(a,b);
    }
    cout<<endl<< "Los numeros ordenados descendentemente son: " << a << ", " << b << ", " << c<<endl;

}
void intercambio(int &a,int&b){
    int aux;
    aux=a;
    a=b;
    b=aux;
}