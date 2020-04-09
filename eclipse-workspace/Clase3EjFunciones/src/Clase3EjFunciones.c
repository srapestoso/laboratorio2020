/*
 ============================================================================
 Name        : Clase3EjFunciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numero(int);

int main(void) {
	int num;
	int mostrar;
	setbuf(stdout, NULL);
	printf("Ingrese un numero: \n");
	scanf("%d", &num);

	mostrar = numero(num);

	printf("\nEl numero que ingreso es : %d", mostrar);

	return EXIT_SUCCESS;
}

int numero(int a){
	int retorno;
	retorno = a;
	return retorno;
}
