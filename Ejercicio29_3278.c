/* Ejercicio 4.4
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int main{

int f,fV,fB,fR,c;
printf("Cantidad de focos");
scanf("%i",f);
for (int i=0;i<=f;i++){
	printf("De que color es el foco");
	printf("1.Verde	2.Blanco  3.Rojo");
	scanf("%i",&c);
	switch (c)
	{
		case "1":fV++;
break;		       
		case "2":fB++;
break;
		case "3":fR++;
break;
		default:
		 printf("La opcion no exixte");


	}

}
printf("Verde:",fV);
printf("Blanco:",fB);
printf("Rojo:",fR);
	
	return 0;
}
