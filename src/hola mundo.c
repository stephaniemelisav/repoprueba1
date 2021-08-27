/*
 ============================================================================
 Name        : hola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);


	int numeroUno;
	int numeroDos;
	int resta;
	char respuesta='s';

	//bucle
	while(respuesta=='s'){
		printf("\nTngrese el primer numero:  \n");
		scanf("%d",&numeroUno);
		printf("\nTngrese el segundo numero:  \n");
		scanf("%d",&numeroDos);

		printf("\nIngrese un caracter:\n");
		fflush(stdin);//windows
		scanf("%c",&respuesta);

	}


	resta = numeroUno - numeroDos;

	printf("\nLa resta de los numeros es %d",resta);

	return EXIT_SUCCESS;//Es para ejecutar el programa

}
