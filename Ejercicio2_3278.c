/*Ejercicio 3.2 
 * Autor:Hugo Braian Bonilla R */
#include<stdio.h>
float pesosMX,totalDeDolares;
float precioDeCambio;
int main()
{
	precioDeCambio=19.02;
	printf("\n\nCantidad de pesos Mexicanos: ");
	scanf("%f",&pesosMX);
	totalDeDolares=(pesosMX/precioDeCambio);
	printf("\n\nEl total de dolares es: %f \n\n",totalDeDolares);
	
	return 0;
}

