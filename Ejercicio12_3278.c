/*Ejercicio 3.2
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double total,sueldoB,horasT;
int main(){
	printf("\n\nEscribe el sueldo neto: ");
	scanf("%lf",&sueldoB);
	printf("\n\nEscrbe las horas trabajadas: ");
	scanf("%lf",&horasT);
	total=sueldoB*horasT;
	if (horasT>0 && sueldoB>0){
	if (horasT>40){
	total=total+((horasT-40)*(sueldoB*2));
	printf("\n\nSueldo total: %lf \n\n",total);
	}else{
		printf("\n\nSueldo total: %lf \n\n",total);
	}
}else{
	printf("\n\nDatos erroneos\n\n");
}
return 0;
}
