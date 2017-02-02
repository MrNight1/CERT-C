// Anota Olmos Oscar David
// Extra: Programa 4 - Mayor

#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
  int n, mayor=0;
  if(sscanf(argv[1], "%d",&n) && n >= 1 && n <= 8){
    for(int i = 0; i < n ; i++)
      mayor += pow(10,i) * 9;
    printf("El numero mayor formado es: %d\n", mayor); //Sacamos las unidades con el modulo y las decenas con la division
  }
  else
    fprintf(stderr,"Solo puedes insertar un numero entero entre 1 y 8\n");
  return 0;
}
