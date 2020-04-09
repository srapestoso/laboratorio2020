/*
 ============================================================================
 Name        : Ej.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Ejemplo de Entrada y Salida de Datos por Consola en C
int main()
{
int a;
int b;
int res;

setbuf(stdout, NULL);

printf("SUMAR-Ingrese un valor para la variable a \n");
//fflush(stdout);
scanf("%d", &a);
printf("\nIngrese un valor para la variable b \n ");
//fflush(stdout);
scanf("%d", &b);
res=a+b;
printf("\nEl resultado de la suma de a+b es %d \n",res);
//fflush(stdout);

printf("\nRESTAR-Ingrese un valor para la variable a y b \n");
//fflush(stdout);
scanf("%d %d", &a, &b);

res=a-b;
printf("\nEl resultado de la resta de a-b es %d \n",res);
//fflush(stdout);

//system("PAUSE()");
//system("CLS()");

return 0;
}
