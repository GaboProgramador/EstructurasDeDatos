//8. Imprimir la tabla con las raíces cuadradas de los valores comprendidos entre 6.0 y 7.5 con incrementos de 0.001
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

    float inicio= 6.0;
    float fin = 7.5;
    float increm = 0.001;


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