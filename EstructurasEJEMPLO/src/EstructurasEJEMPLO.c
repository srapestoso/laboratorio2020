/*
 ============================================================================
 Name        : EstructurasEJEMPLO.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANT 3

typedef struct
{
	char nombre[20];
	char apellido[20];
	int legajo;
}ePersona;

int main(void) {
	setbuf(stdout,NULL);
	ePersona arrayPersona[CANT];

	printf("\n\n= = = A L T A = = =\n\n");

	// Pido los datos
	for(int i=0; i<CANT; i++){
	printf("\nIngrese el nombre: ");
	gets(arrayPersona[i].nombre);

	printf("\nIngrese el apellido: ");
	gets(arrayPersona[i].apellido);
	printf("\nIngrese el legajo: ");
	scanf("%d", &arrayPersona[i].legajo);
	fflush(stdin);
	}

	printf("\n\n= = = D A T O S  I N G R E S A D O S = = =\n\n");
	// Muestro los datos
	for(int i=0; i<CANT; i++){
		printf("\nNombre : %s",arrayPersona[i].nombre);
		printf("\nApellido : %s",arrayPersona[i].apellido);
		printf("\nLegajo : %d",arrayPersona[i].legajo);
	}

	return EXIT_SUCCESS;
}
