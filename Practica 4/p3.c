//Anota Olmos Oscar David
//Practica 4 programa 3

#include <stdio.h>

int main(){
  int n, divisores;
  scanf("%d",&n);
  for(int i = 2; i <= n; i++){
    divisores = 0;
    for(int j = 1; j <=n; j++){
      if(!(i%j))
        divisores++;
    }
    printf(divisores==2?"%i\n":"", i);
  }
}
