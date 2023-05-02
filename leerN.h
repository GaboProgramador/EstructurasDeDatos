int Leer_N(){
    int num;

    cout<<endl<<"Ingrese N: "<<endl;
    cin>> num ; 

    if(num < 1){
        num = Leer_N();
    }

    return num;


}

double Leer_N_decimal(){
    double num;

    cout<<"\t(ingresa un valor decimal pos.)  "<<endl;
    cin>> num ; 

    if(num < 1){
        num = Leer_N_decimal();
    }

    return num;
}

void Imprimir_Arreglo(int n, int *vect){

	cout<<endl<<"\t\t\t El vector es:  "<<endl;
	
	for(int i = 0; i < n; i++){
		cout<<"Del valor ["<<i+1<<"]: "<<*vect<<endl;
		vect++;
	}

}

void Ingresar_rangos(int *num1, int *num2){

    cout<<" INGRESAR LOS DOS NUMEROS DEL RANGO "<<endl;
    *num1 = Leer_N();
    *num2 = Leer_N();

    if(*num1 > *num2 ){
        cout<<endl<<" El valor inicial debe ser mayor al final, ingresa otra vez los datos "<<endl<<endl;
        Ingresar_rangos(num1, num2);
    }


}   