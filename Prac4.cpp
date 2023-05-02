//Iterativo a Recursivo
//Genera los 10 primeros numeros enteros positivos
//Gabriel Jimenez 7182

#include<iostream>
#define NR 10 //constante para definir cantidad de valores a generar
using namespace std;
int main (){
    system("color f0");
    
    int generarN(int n);//prototipo

    //generarN(1);//llamado a la funcion
    cout<<endl<<"La suma es: "<<generarN(1);
    cout<<endl;
    system("pause");

}


int generarN(int n){//Aqui se implementa recursividad

    if(n<=NR){
        
        return n+generarN(n+1);
    
    }
    return 0;
}

/*
void generarN(int n){//Aqui se implementa iteratividad

    for(int i=1;i<=n;i++){
        cout<<endl<<"Valor generado: "<<i;
    }
    
}
*/