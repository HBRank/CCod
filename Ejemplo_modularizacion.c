/*Ejemplo de modularizacion
 *Hugo Braian Bonilla Rodriguez */
#include<stdio.h>

float base,altura,area;
int capturar();
int informar();
int main()
{
	do{
	
	}while (capturar()!=0);
informar();
return 0;


}
int capturar ()
{
	printf("\n\nEscriba el valor de la base:");
	scanf("%f",&base);
	printf("\n\nEscriba el valor de el area:");
	scanf("%f",&altura);
	if (base>0 && altura>0)
	{
 	return 0;
	}else{
	printf("\n\nDatos erroneos\n");
	}
}
int informar()
{
	area=(base*altura)/2;
	printf("\n\nLa area es: %f \n",area);
	return 0;
}
