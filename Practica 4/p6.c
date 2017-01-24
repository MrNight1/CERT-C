//Anota Olmos Oscar David
//Practica 4 programa 6

#include <stdio.h>

int main(){
  int b,h,n;
  float area;
  printf("1) Area de un cuadrado\n");
  printf("2) Area de un triangulo\n");
  printf("3) Area de un rectangulo\n");
  printf("Elija una opcion: ");
  scanf("%d",&n);
  switch(n){
    case 1:
      printf("Inserte la medida del lado: ");
      scanf("%d",&b);
      area = b*b;
      break;
    case 2:
      printf("Inserte la medida de la base: ");
      scanf("%d",&b);
      printf("Inserte la medida de la altura: ");
      scanf("%d",&h);
      area = (b*h)/2;
      break;
    case 3:
      printf("Inserte la medida de la base: ");
      scanf("%d",&b);
      printf("Inserte la medida de la altura: ");
      scanf("%d",&h);
      area = (b*h);
      break;
    default:
      printf("La opcion no es correcta!!");
  }
  printf("El area es: %f\n", area);
  return 0;
}
