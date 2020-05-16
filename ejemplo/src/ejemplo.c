/*
 ============================================================================
 Name        : ejemplo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(float,float,float*);

int main(void) {

	setbuf(stdout,NULL);
	float a,b,resultado;
	printf("1. Ingresar 1er operando (A) = \n");
	scanf("%f", &a);
	printf("1. Ingresar 1er operando (B) = \n");
	scanf("%f", &b);
	fflush(stdin);

	sumar(a,b,&resultado);

	printf("El resultado de la suma es : %.2f", resultado);

	return EXIT_SUCCESS;
}

int sumar(float a,float b,float* pResultado)
{
	int ret=-1;

	if(a==0 || b == 0)
	{
		printf("Sos tonto? we");
	}
	else
	{
		*pResultado = a + b;
	}

	return ret;
}

