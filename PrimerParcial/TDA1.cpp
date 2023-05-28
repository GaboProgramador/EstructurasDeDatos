//Programa que hace uso del TDA vector
//Gabriel Jimenez 7182

#include <iostream>
#include "Vector.h"     //Definicion del TDA

using namespace std;

int main(){
    system("color f0");
    vector vec;        //Instanciar el objeto de tipo TDA vector
    vec.setNumEle(5);
    cout<<endl<<"El valor del atributo numEle es: "<<vec.getNumEle();

    cout<<endl;
    system("pause");
    return 0;
}
