/*Ejercicio 4.2
 * Autor: Hugo Braian onilla Rodriguez */
#include<stdio.h>
int main ()
{
	int S,D,T,Sc,Dc,Tc,T;
printf("Cuantas hamburguesas Sensillas :");
scanf("%",S);
printf("Cuantas hamburguesas Dobles :");
scanf("%",D);
printf("Cuantas hamburguesas Triples :");
scanf("%",T);

Sc=S*20;
Dc=D*25;
Tc=T*28;
T=Sc+Dc+Tc;
T=T+(T*.05);
printf("El total es: %d",T);

return 0; 
}
