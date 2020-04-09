/*
 ============================================================================
 Name        : Ej4CLASE2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int max;
	int min;
	int num;
	int acc=0;
	int promedio;

	setbuf(stdout, NULL);

		for(int i=0;i<5;i++)
			{
				printf("\nIngrese un numero:");
				scanf("%d",&num);
				acc = acc + num;

				if(i==0){
					max = num;
					min = num;
					}
				else{
					if(num>max)
					{
						max = num;
					}
					if(num<max)
					{
						min = num;
					}
				}

			}
			promedio = acc / 5;

			printf("El promedio es %d, el max %d y el min %d",promedio,max,min);

	return EXIT_SUCCESS;
}
