// Anota Olmos Oscar David
// Extra: Programa 2 - Sumar digitos

#include <stdio.h>

int main(int argc, char* argv[]){
  int n;
  if(sscanf(argv[1], "%d",&n) && n >= 10 && n <= 99)
    printf("El resultado de la suma de los digitos es: %d\n", (n%10)+(n/10)); //Sacamos las unidades con el modulo y las decenas con la division
  else
    fprintf(stderr,"Solo puedes insertar un numero entero y debe estar entre 10 y 99\n");
  return 0;
}
