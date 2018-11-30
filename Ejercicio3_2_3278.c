/*Ejercicio 3.1 
 * Autor:Hugo Braian Bonilla*/
#include<stdio.h>
int edad;
int main()
{
	printf("Escibe tu edad: ");
	scanf("%i",&edad);
	if (edad>=18)
	{
	printf("Puedes votar");
	}else{
	printf("No puedes votar");
	}		

	return 0;
}
