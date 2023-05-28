//Iterativo a Recursivo
//Genera los 10 primeros numeros enteros positivos
//Gabriel Jimenez 7182

#include<iostream>
#define NR 10 //constante para definir cantidad de valores a generar
using namespace std;
int main (){
    system("color f0");
    int sum=0;
    void generarN(int n,int *sum);//prototipo

    generarN(1,&sum);//llamado a la funcion
    cout<<endl<<"La suma es: "<<sum;
    cout<<endl;
    system("pause");

}


void generarN(int n,int *sum){//Aqui se implementa recursividad

    if(n<=NR){
        cout<<endl<<"Valor generado: "<<n;
        generarN(n+1, sum);//LLamado a la funcion si no hay en n+1 se hace infinito //no debe ir el ampersan por que ya es una direccion de memoria
        *sum+=n;
    
    }


}

/*
void generarN(int n){//Aqui se implementa iteratividad

    for(int i=1;i<=n;i++){
        cout<<endl<<"Valor generado: "<<i;
    }
    
}
*/