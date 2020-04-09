/*
 ============================================================================
 Name        : EJ3CLASE2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	setbuf(stdout, NULL);

	//declaro las variables que voy a utilizar
	int hora;
	//tomo la hora ingresada
	printf("Ingrese la hora: \n");
	scanf("%d", &hora);

	switch(hora){
	    case 7:
	    case 8:
	    case 9:
	    case 10:
	    case 11:
	    printf("Es de mañana \n");
	        break;
	    default:
	        printf("NO es de mañana \n");
	        break;
	    }

/*
	//CHAR
	//tomo la hora ingresada
	char letra;
	letra = 'p';
​
	switch(letra){
	    case 'a':
	    printf("Es de mañana \n");
	        break;
	    default:
	        printf("NO es de mañana \n");
	        break;
	    }
*/

	 //VALORES BOOOLEANOS
/*	int hora;
	printf("Ingrese la hora: \n");
	scanf("%d", &hora);
  	switch(hora>6){
		case 1:
			printf("Es de mañana \n");
			break;
		case 0:  // 0 = falso
			printf("NO es de mañana \n");
			break;
}
*/

//-switch realiza las comparaciones usando el operador === (igual estricto).
//-Se permite evaluar tanto números como cadenas de texto o valores booleanos.
//-Switch solo permite evaluar valores concretos de la expresión:
//       no permite evaluar intervalos (pertenencia de la expresión a un intervalo o rango)
//       ni expresiones compuestas.
//-También se admiten situaciones como switch (edad+1>18) donde la expresión devuelve un booleano
	                    /*switch(laHora>11){
	                        case true:
	                            alert("Es verdadero");
	                            break;
	                        case false:
	                            alert("Es falso");
	                            break;
	                        }
*/


	return EXIT_SUCCESS;
}
