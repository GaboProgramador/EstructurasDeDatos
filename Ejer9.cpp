//9.Generalizar la solucion anterior
//Gabriel Jimenez 7182
#include <iostream>
#include <cmath>
#include <string.h>
#include <iomanip>
using namespace std;

#include "leerN.h"
int main(){

	//Prototypes
    void Generar_tabla(float inicio, float fin, float i);
	// 

    float inicio ;
    float fin ;
    float increm ;

    cout<<endl<<"Ingrese el incio: ";
    cin>>inicio;
    cout<<endl<<"Ingrese el final: ";
    cin>>fin;
    cout<<endl<<"Ingrese el incremento: ";
    cin>>increm;


    cout<<endl<<"\t\t\t TABLA COMPRENDIDA ENTRE [ "<<inicio<<" , "<<fin<<" ] con incremento de: "<<increm<<endl;
    cout<<endl<<"NUMERO "<<"\t\t RAIZ DEL NUMERO "<<endl;

    Generar_tabla(inicio, fin, increm);

}

void Generar_tabla(float inicio, float fin, float i){
    
    if(inicio <= fin){

        std::cout<<inicio<< "\t\t" << std::fixed << std::setprecision(3) << sqrt(inicio) << std::endl;
        Generar_tabla(inicio+i, fin, i);
    }
}