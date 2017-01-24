//Anota Olmos Oscar David
//Práctica 9 - The last one

#include<stdio.h>
#include<stdlib.h>
//int atoi(char*);
int main(int argc, char *argv[])
{
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!"); // Imprimir errores
		exit(1349);
	}
	else{	
  	printf("%s\n",argv[argc-1]);//Imprime el ultimo argumento
  }
}
