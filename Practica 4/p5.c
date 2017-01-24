// Anota Olmos Oscar David
// Practica 4 programa 5

#include <stdio.h>
#include <string.h>

int main(){
    int tam = 100;
    char entrada[tam];// = "ola k ase?";
    char *pass = "olakase?";
    fscanf(stdin,"%s",entrada);
    
    printf(strcmp(entrada,pass)?"GTFOH!\n":"OK\n");
    return 0;
}
