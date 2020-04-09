/*
 ============================================================================
 Name        : Ej4Clase1.c
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

	int a,i,positivos=0,negativos;

	for(i=0;i<10;i++){
		printf("Ingrese un valor: \n");
		scanf("%d",&a);
		if(a<0){
			negativos++;
		}
		else if(a>0){
			positivos++;
		}
	}

	printf("=============================================\n");
	printf("La cantidad de positivos es: %d y negativos : %d",positivos,negativos);


	return EXIT_SUCCESS;
}
