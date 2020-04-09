/*
 ============================================================================
 Name        : Clase3Ej2AREA.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float area(int radio);

int main(void) {
	setbuf(stdout, NULL);

	float calculo;
	int radio;

	printf("\nIngrese el radio del circulo:");
	scanf("%d", &radio);

	calculo = area(radio);

	printf("El area del circulo ingresado es de : %.2f", calculo);

	return EXIT_SUCCESS;
}

float area(int radio)
{
	float total;
	total = 3.14 * (radio*radio);
	return total;
}
