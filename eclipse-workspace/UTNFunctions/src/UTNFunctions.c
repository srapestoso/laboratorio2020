/*
 ============================================================================
 Name        : UTN.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main() {
	int n;
	setbuf(stdout, NULL);

	utn_getNumero(&n, "\nIngrese el numero:", "\nDato incorrecto, reingrese un número\n",1,9,3);
	printf("num ingresado: %d", n );

	return 0;
}
