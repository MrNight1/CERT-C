//Anota Olmos Oscar David
//Práctica 7 - Cifrado xor

#include <stdio.h>

int main(){
  char palabra[] = {'a','b','c','d','e','f','g','h','i','j','k'};
  char cifrado[100];
  int n = 145;
  for(int a=0;a<sizeof(palabra)/sizeof(char);a++)
	{
		cifrado[a] = palabra[a]^n; //Cifrar 
		printf("%c",cifrado[a]);
	}
	printf("\n");
	for(int a=0;a<sizeof(palabra)/sizeof(char);a++)
	{
		printf("%c",cifrado[a]^n); // Decifrar
	}
	printf("\n");
  return 0;
}
