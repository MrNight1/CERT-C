// Anota Olmos Oscar David
// Practica 3 - Fin del mundo
#include <stdio.h>
#include <time.h> //Aqui esta la funcion ctime
#include <limits.h> //Biblioteca que contiene las constantes como INT_MAX.

int main(){
  time_t tiempo = INT_MAX; //Asigna el valor maximo de un entero a tiempo
  printf("El fin del mundo sera: %s\n", ctime(&tiempo)); //Imprime la fecha 
  return 0;
}
