// Anota Olmos Oscar David
// Extra: Programa 1 - Suma

#include <stdio.h>

int main(int argc, char* argv[]){
  int n1, n2;
  if(sscanf(argv[1], "%d",&n1) && sscanf(argv[2], "%d",&n2))
    printf("El resultado de la suma es: %d\n", n1+n2);
  else
    fprintf(stderr,"No insertaste numeros enteros :P\n");
  return 0;
}
