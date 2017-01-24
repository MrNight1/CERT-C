//Anota Olmos Oscar David
// Practica 0

#include <stdio.h>

int main(){
  int i = 1; 
  for(i=0; i < 30; i++){
    if((i+1)%3 == 0 && (i+1)%5 == 0)
      printf("FizzBuzz\n");
    else
      if((i+1)%3 == 0)
        printf("Fizz\n");
      else
        if((i+1)%5 == 0)
          printf("Buzz\n");
        else
          printf("%d\n",(i+1));
  }
}
