//programa(recursividad), ingre valores # enteros y determine si son perfectos-deficientes-abundantes
#include<iostream>
#define EXT 100
using namespace std;


int main() {
system("color 01");
int vec[EXT]
int leer_n(int max);
int sumardivisores(int num,int div);
int n,num;
n=leer_n(-32768,32768);
if (sumardivisores(n,n-1)==n) {
  std::cout << "Es perfecto" << '\n';
} else{
  if (sumardivisores(n,n-1)<n) {
    std::cout << "Es deficiente" <<endl;
  } else{
    if (sumardivisores(n,n-1)>n) {
      std::cout << "Es abundante" << '\n';
    }
  }
}
  return 0;
}
int sumardivisores(int num,int div){
  if (div>0) {
    if (num%div==0) {
      return(div+sumardivisores(num,div-1));
    } else{
      return(sumardivisores(num,div-1));
    }
  } else{
    return 0;
  }
}
