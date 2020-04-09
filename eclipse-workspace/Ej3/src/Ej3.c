/*
 ============================================================================
 Name        : Ej3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
//Ejemplo de Control de Flujo con Operaciones Lógicas
int main ()
{
setbuf(stdout, NULL);
int nota;
int res;

nota = 7;

res = (nota >= 7);
printf("Contendido de la variable res %d ", res);

if(res)
{
    printf("\nEl alumno esta aprobado \n");
}

return 0;
}
