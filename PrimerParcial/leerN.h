int Leer_N(){
    int num;

    cout<<"ingresa el numero a individualizar sus digitos "<<endl;
    cin>> num ; 

    if(num < 1){
        num = Leer_N();
    }

    return num;


}