//Programa que usando recursividad, ingrese n numeros para calcular sus exponentes usando sumas sucesivas
//Gabriel Jimenez 7182 

#include<iostream>
using namespace std;

int main(){
    system("color f0");

    int leerN ();//Prototipo funcion leer cantidad de veces

    int num;
    num=leerN();

    int ingresarAB(int num);        //Prototipo de ingreso de numeros A y B

    ingresarAB(num);



}

int ingresarAB(int num){
    int Pote(int A,int B); 
    //int Potencia(int a,int b);
    //int multiply(int a, int b);   
    if(num>0){
        int A,B,C;
        cout<<endl<<"Ingrese el termino A: ";
        cin>>A;
        /*if(A<0){
            ingresarAB(num);
            cout<<endl<<"Ingrese el termino B: ";
            cin>>B;
        }*/
        cout<<endl<<"Ingrese el termino B: ";
        cin>>B;
        if(A<0||B<0){
            cout<<endl<<"Ingrese los numeros correctos (No menores que 0)";
            ingresarAB(num);
        }
      
        C=Pote(A,B);
        cout<<endl<<C;
        //int D;
        //D=Potencia(C,B);
        //cout<<endl<<D;

        ingresarAB(num-1);
        
    }
}

int leerN (){
    int n;

    cout<<"Ingrese N numeros para buscar su exponente: "<<endl;
    cin>> n ; 

    if(n < 1){
        n = leerN();
    }

    return n;


}

int Pote (int A,int B){
    if (B == 0) {
        return 1;
    } else {
        return A * Pote(A, B - 1);
    }

    
}


//No pude crear la funcion recursiva que me falto para eliminar el * de la funcion Pontencia


/*
int main(){
    system("color f0");

    int leerN ();//Prototipo funcion leer cantidad de veces

    int num;
    num=leerN();

    int ingresarAB(int num);        //Prototipo de ingreso de numeros A y B

    ingresarAB(num);



}

int ingresarAB(int num){
    int Multi(int A,int B); 
    int Potencia(int a,int b);
    //int multiply(int a, int b);   
    if(num>0){
        int A,B,C;
        cout<<endl<<"Ingrese el termino A: ";
        cin>>A;
        /*if(A<0){
            ingresarAB(num);
            cout<<endl<<"Ingrese el termino B: ";
            cin>>B;
        }
        cout<<endl<<"Ingrese el termino B: ";
        cin>>B;
        if(A<0||B<0){
            cout<<endl<<"Ingrese los numeros correctos (No menores que 0)";
            ingresarAB(num);
        }
      
        C=Multi(A,A);
        cout<<endl<<C;//9
        int D;
        D=Potencia(C,B);
        cout<<endl<<D;

        ingresarAB(num-1);
        
    }
}

int leerN (){
    int n;

    cout<<"Ingrese N numeros para buscar su exponente: "<<endl;
    cin>> n ; 

    if(n < 1){
        n = leerN();
    }

    return n;


}

int Multi (int A,int B){
    if (B == 0) {
        return 0;
    } else {
        return A + Multi(A, B - 1);
    }

    
}


int Potencia (int A,int B){
    if(B>0){
        Multi (A,B);
    }
    Potencia(A,B-1);
    

}

*/


