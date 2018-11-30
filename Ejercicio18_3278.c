/*Ejercicio 3.8
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
double antiguedad,montoSueldo,bonoA,bonoS;
int main(){
	printf("\nEscribe la antiguedad :");
	scanf("%lf",&antiguedad);
	printf("\nEscribe el monto del sueldo : ");
	scanf("%lf",&montoSueldo);
if (antiguedad>0 && montoSueldo>0){
	if (antiguedad>2 && antiguedad<5){
		bonoA=(montoSueldo/100)*20;
	}else{
	if (antiguedad<5){
		bonoA=(montoSueldo/100)*30;
	}
	if (montoSueldo<1000)
	{
		bonoS=(montoSueldo/100)*25;
	}else
	{
		if (montoSueldo<=3500)
		{
			bonoS=(montoSueldo/100)*15;
		}else{
		if (montoSueldo>3500)
		{
			bonoS=(montoSueldo/100)*10;
		}}}}
	if (bonoA>bonoS){
		printf("El bono es: %lf ",bonoA);
	}else{
		printf("El bono es: %lf ",bonoS);
	}
}else{
	printf("\n\nDatos erroneos\n\n");
}
return 0;
}
