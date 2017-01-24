//Anota Olmos Oscar David
//Practica 5 Factorial recursivo

#include <stdio.h>

int factorial(int);

int main(){
  int n;
  scanf("%d",&n);
  printf("el factorial es: %d\n",factorial(n));
  return 0;
}

int factorial(int x){
  if(x == 0)
    return 1;
  else{
    return x * factorial(x-1);
  }
}
