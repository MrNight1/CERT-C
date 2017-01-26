// Anota Olmos Oscar David
// Practica 14 - Read /dev/random

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{

#if 0
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}
#endif

	int fd; //Declaracion de un descriptor de archivos.
	char *archivo="/dev/random\0";
	int numero;

	//fd=open(archivo,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
	//                                   set_readUser|set_writeUser
	fd=open(archivo,O_RDONLY);
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fd);

//#if 0
	//if(write(fd,"hola123.,\n",10)==-1)
	//	fprintf(stderr,"Error al escribir en el archivo.");
	if(read(fd,&numero,sizeof(numero)))
	    printf("numero: %d\n",numero);
//#endif
  
	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
