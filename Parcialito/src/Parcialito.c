/*
 ============================================================================
 Name        : Parcialito.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main () {

	setbuf(stdout, NULL);

	float arrayPrecio[15];
	 int i;

	for(i=0;i<15;i++)
	{
	printf("Ingrese el precio");
	scanf("%f",arrayPrecio);

	}
	printf("%.2f",arrayPrecio[14]);


   return 0;
}
