/*
 ============================================================================
 Name        : ej3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
//Ejemplo de Operaciones l�gicas en C
int main ()
{
setbuf(stdout, NULL);
//Declaraci�n de variables
int a;
int b;
int resultado;

//Inicializaci�n de variables
a = 1 ;
b = 0 ;

resultado = a && b ;
printf("Resultado de a interseccion b es : %d",resultado);

//Declaraci�n de variables
float variableA;
float variableB;
int resultadof;

//Inicializaci�n de variables
variableA = 3.14;
variableB = 5.5;

resultadof = variableA < variableB;
printf("\nResultado de la comparacion: %d \n",resultadof);

system("PAUSE");

return 0;
}
