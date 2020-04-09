/*
 ============================================================================
 Name        : EJ3clase1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	setbuf(stdout,NULL);
	int a;
	int b;
	int resultado;

	//Ingreso el primer valor
	printf("\nIngrese 1 numero: ");
	scanf("%d",&a);
	//Compruebo si es igual a 0, sino vuelvo a pedir el dato
	while(a==0){
		printf("\nReingrese un numero distinto de 0: ");
			scanf("%d",&a);
	}

	//Ingreso el segundo valor
	printf("\nIngrese 2 numero: ");
	scanf("%d",&b);

	//Compruebo si es igual a 0, sino vuelvo a pedir el dato
	while(b==0){
			printf("\nReingrese un numero distinto de 0: ");
				scanf("%d",&b);
		}

	//Hago el calculo de la resta

	resultado=a-b;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);

	//Compruebo si es positivo o negativo, el resultado
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado<0){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}
