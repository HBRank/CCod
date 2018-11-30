/*Ejercicio 3.15
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int ND;
int main(){
	printf("\n\nNumero del dia de la semana :");
	scanf("%i",&ND);
	switch (ND){
		case 1:
			printf("\n\nLunes\n\n");
			break;

		case 2:
			printf("\n\nMartes\n\n");
			break;
		case 3:
			printf("\n\nMiercoles\n\n");
			break;
		case 4:
			printf("\n\nJueves\n\n");
			break;
		case 5:
			printf("\n\nViernes\n\n");
			break;
		case 6:
			printf("\n\nSabado\n\n");
			break;
		case 7:
			printf("\n\nDomingo\n\n");
			break;
	}
return 0;
}
