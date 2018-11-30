/*Ejercicio 3.12
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double pagoPH,total;
int horasT,horasE;
int main(){
	printf("\n\nHoras trabajadas :");
	scanf("%d",&horasT);
	printf("\n\nPagp por hora :");
	scanf("%lf",&pagoPH);
	total=pagoPH*horasT;
	if (horasT>=0 && horasT<=40){
		printf("\n\nEl total es: %lf \n\n",total);}
		if (horasT>=42 && horasT<=45){
		horasE=horasT-40;
		total=total+(horasE*(pagoPH*2));
		printf("\n\nEl total es: %lf \n\n",total);}
		if (horasT>=46 && horasT<=50){
		horasE=horasT-40;
		total=total+(horasE*(pagoPH*3));
		printf("\n\nEl total es: %lf \n\n",total);}
		if (horasT>50){
		printf("\n\nNo esta permitido trabajar más de 50 horas\n\n");
		}
	return 0;	
		}
