/*
 ============================================================================
 Name        : EjdeCLASE2.c
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
	int divisores=0;



	printf("Ingrese un numero para ver sus divisores\n");
	scanf("%d",&numero);
		for(int i=1; i<=numero; i++){
				if ((numero%i)==0)
				{
					printf("\nLos divisores son : %d", i); //Muestra los divisores
					divisores++;
				}
		}
		printf("\nSe encontraron %d numeros divisores", divisores); //Muestra la cantidad de divisores
	return 0;
}
