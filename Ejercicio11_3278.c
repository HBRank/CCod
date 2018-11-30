/*Ejercicio 3.1
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int edad;
int main(){
	printf("\n\nEscribe tu edad: ");
	scanf("%i",&edad);
	if (edad>0){
	if (edad>=18){
	printf("\n\nPuedes votar\n\n");
	}else{
	printf("\n\nNo eres mayor de edad\n\n");
	}}else
	{
		printf("\n\nDatos Erroneos\n\n");
	}
return 0;
}

