//Usando recursividad el programa debe imrpimir las letras minustulas del alfabeto
#include<iostream>
#define MAX 10

using namespace std;

int main (){

    system("color f0");
    
    void generarL(char n);
    generarL('A');
    cout<<endl;
    system("pause");

}

/*void generarL(char n,char N){

    if(n<='z'){
        cout<<endl<<N;
        cout<<endl<<n;
        cout<<endl;
        generarL(n+1,++N);
    }

}
*/
void generarL(char n){

    if(n<='z'){
        cout<<endl<<n;
        
        cout<<endl;
        generarL(n+1);

    }

}

