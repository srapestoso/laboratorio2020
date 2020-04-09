/*
 ============================================================================
 Name        : EjemploDeFloat.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
int b;
int c;
float div;
float dec;
//int res;
setbuf(stdout, NULL);

a=5;
b=2;

dec= 2.8;
c=dec;

printf("la variable c %d", c);

div=(float)a/b;

printf("\n la variable div %.2f", div);

return 0;
}
