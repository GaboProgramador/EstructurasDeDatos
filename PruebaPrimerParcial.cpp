//Elaborar un programa que permita calcular el exponenten A elevado a la B , por medio de sumas sucesivas
#include <iostream>
using namespace std;
int main(){
  system("color 01");
   int a, b;
   int suma(int a, int b);
   cout << "Introduzca el valor de A: ";
   cin >> a;
   do
   {
       cout << "Introduzca el valor de B, este debe cumplir con esta condicion: >=0 : ";
       cin >> b;
   }while(b<0);
   cout << a << " sumando sucesivamente " << b << " = " << suma(a,b) << endl;
   system("pause");
   return 0;
}
int suma(int a, int b)
{
if (b==0)
    return 1;
else
    return (suma(a,b-1)*a);
}
