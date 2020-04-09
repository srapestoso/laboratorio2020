/*
 ============================================================================
 Name        : EJ2CLASE2.c
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
	int numero;
	int positivos=0;
	char pregunta='s';
		do
			{
				printf("Ingrese un numero: ");					//Ingreso el dato
				scanf("%d",&numero);

					if (numero>0)								//Pregunto si es positivo y los acumulo
						{
							positivos =  positivos + numero ;
						}
				printf("Desea continuar? s/n \n");
				fflush(stdin);									//Limpiamos el buffer cuando trabajamos con caracteres
				scanf("%c", &pregunta);
			}while(pregunta == 's');

	printf("\nLa suma de los numeros positivos es %d", positivos);

	return EXIT_SUCCESS;
}
