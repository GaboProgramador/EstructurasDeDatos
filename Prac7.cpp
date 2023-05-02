//Programa de gestion de cadenas iterativo
//Determina las palabras palindromo de una cadena :)
//Gabriel Jimenez 7182  
#include <iostream>
#include <string.h>
#define EXT 15 //Definicion de la constantes que marca el tamanio maximo de las estructuras
using namespace std;

int main(){//Principal
    system("color f0");
    int np;//cantidad de palabras que contiene la frase 
    char f[EXT];
    char pal[EXT/2][EXT];

    //Prototipo
    bool Palindromo(char f[]);
    void PasarPalabra(char f[],char pal [][EXT], int *npal);//Divide cadena en un arreglo de palabras 
    cout <<endl<<"Va a ingresar una cadena: ";
    cin.getline(f,15,'.');//Lee una linea de caracteres

    PasarPalabra (f, pal, &np);

    for(int i=0; i<np; i++){//ciclo de recorrido que constan en la matriz
    cout <<endl<<"La palabra es: "<<pal[i];
    cout <<endl<<"Esa palabra "<<(Palindromo(pal [i])?"Si":"No")<<" es un palindromo";
    
    }
    cout <<endl;
    system("pause");

}

void PasarPalabra(char f[],char pal [][EXT], int *npal){

    int i,j,k;//contadores de posiciones en el vector 
    //i vector//j filas de matriz// k columnas de matriz
    j=k=0;//inicializar posiciones 

    for(i=0;i< strlen(f);i++,j--){
        if(((f[i]>='A') && (f[i]<='Z'))||((f[i]>='a') && (f[i]<='z'))){

            pal[j][k]=f[i];//tranferir una letra desde la cadena original a la matriz de palabras
            k++;//siguiente columna de la misma palabra
        }
        else if(((f[i-1]>='A') && (f[i-1]<='Z'))||((f[i-1]>='a') && (f[i-1]<='z'))){
            pal[j][k]='\0';//inserta marcador de fin de cadena
            j++;
            k=0;

        }
        pal[j][k]='\0';//inserta marcador de fin de cadena
        j++;
        *npal=j;
        
    }



}

bool Palindromo(char f[]){
    int i,j;//contadores de posiciones en el vector
    j= strlen(f)-1;

    for(i=0;i<j;i++,j--){
        if(f[i]!=f[j]){
            return false;
        }

    }
    return true;


}