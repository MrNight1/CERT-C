//Anota Olmos Oscar David
//Practica 4 programa 2

#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++){
    printf(i%2?"%i\n":"", i);
  }
}
