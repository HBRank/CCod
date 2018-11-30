/*Ejercicio 2.6
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include <stdio.h>
#include <math.h>
int main(){
double catetoO,catetoA,hipotenusa,T; 
	printf("\n\nIntroduce la medida del cateto opuesto: ");
	scanf("%lf",&catetoO);
	printf("\n\nintroduce la medida del cateto adyacente: ");
	scanf("%lf",&catetoA);
	if (catetoO>0 && catetoA>0)
	{
	hipotenusa=sqrt((catetoO*catetoO)+(catetoA*catetoA));
	printf("\n\nLa hipotenusa es: %.3lf \n\n",hipotenusa);	
	
	}

	return 0;
}
