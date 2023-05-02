//Programa que separe numeros

#include <iostream>
using namespace std;


#include "leerN.h"

#define NR 10 			


int main(){

	//Prototypes
    void Individualizar_dig(int num, int vect[]);
    void IngresarNumeros(int num,int *dmay);
    int Leer_N();
    
	//

    int num =0;
    int vect[NR];
    int mm;         //Contiene el digito mayor de todos los digitos mayores

    cout<<"Ingresar un nuemro para individualizar sus digitos: "<<endl;
    num = Leer_N();
    mm = 0;       //inicializamos var de digito mayo en 0
    IngresarNumeros(num,&mm);

    cout<<endl<<"El digito mayor encontrado entre los valores mayores es: "<<mm;

    
	
}



void IngresarNumeros(int num, int *dmay){
    //Prototipo

    void Individualizar_dig(int n1,int *dm);        //De la funcion que individualiza los digitos
    int lec;
    int may;        //Digito mayor de cada numero 
    

    if(num>0){      //Todavia se debe ingresar un valor
        cout<<endl<<"Ingrese un valor entero: ";
        cin>>lec;
        may=0;      //Por defecto el digito mayor es 0
        if(num==0){
            cout<<endl<<"> "<<num;
        }else{
        Individualizar_dig(abs(lec),&may);      //Si pasa la direccion del digito mayor 
        }
        cout<<endl<<"El digito mayor del numero ingresado es: "<<may;
        if(may>*dmay){
            *dmay=may;
        }
        IngresarNumeros(num-1,dmay);     //Llamado a lectura del siguiente valor
    }

}

void Individualizar_dig(int nu,int *dm){
    int dig;
    if(nu!=0){
        dig= nu%10;     //Extrae un digito
        Individualizar_dig(nu/10,dm);
        cout<<endl<<"> "<<dig;
        if(dig>*dm){        //El numero digito extraido es mayor
            *dm=dig;
        }

        
    }
   
}