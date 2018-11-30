/*Ejercicio 2.3
 * Autor:Hugo Braian Bonilla R*/
#include<stdio.h>
int aDeNacimiento,edad;
int main()
{
	printf("\n\nIntroduce tu año de nacimiento :\n");
	scanf("%i",&aDeNacimiento);
	if (aDeNacimiento>0)
	{
		edad=(aDeNacimiento*(-1))+2018;
		printf("Su edad es: %i \n\n",edad);
	}else{
	printf("año incorrecto");
	}
}
