/*
 ============================================================================
 Name        : EJdeSWITCH.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int mes;

	printf("Ingrese el mes: ");
	scanf("%d", &mes);

	switch (mes){
	case 2:
		printf("Tiene 28 dias");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("\nTiene 30 dias");
		break;
	default:
		printf("\nTiene 31 dias");
	}

	return EXIT_SUCCESS;
}
