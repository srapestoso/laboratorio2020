/*
 ============================================================================
 Name        : Ej4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>
int calculoMultiplicar(int x, int y); //Prototipo

int main()
{
setbuf(stdout, NULL);
int a,b,res;


printf("Ingrese un valor para a ");
scanf("%d", &a);

printf("\nIngrese un valor para b ");
scanf("%d", &b);

res=calculoMultiplicar(a,b);
printf("\nEl resultado es %d \n", res);

system("PAUSE");

return 0;
}

//Escribo la Función calculoMultiplicar
int calculoMultiplicar(int x, int y)
{
int tot;
 tot=x*y;
 return tot;
}
