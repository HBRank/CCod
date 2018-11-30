/*Ejercicio 3.3
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double dinero;
int main(){
	printf("\nEscribe cuanto dinero tienes: ");
	scanf("%lf",&dinero);
	if (dinero>0){
		if (dinero<=10){
			printf("\n\nCompra una tarjeta\n\n");
		}else{
		if (dinero<=100){
			printf("\n\nCompra chocolates\n\n");
		}else{
		if (dinero<=250){
			printf("\n\nCompra flores\n\n");
		}else{
		if (dinero>251){
			printf("\n\nCompra un anillo\n\n");
		}}}}}else{
			printf("\n\nDatos Erroneos\n\n");
		}
return 0;
}



