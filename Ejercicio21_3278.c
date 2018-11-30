/*Ejercicio 3.11
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int antiguedad;
int main(){
	printf("\n\nEscribe la antiguedad :");
	scanf("%d",&antiguedad);
	if (antiguedad==1){
		printf("\n\n$100.00\n\n");}
	if (antiguedad==2){
	printf("\n\n$200.00\n\n");}
	if (antiguedad==3){
	printf("\n\n$300.00\n\n");}
	if (antiguedad==4){
	printf("\n\n$400.00\n\n");}
	if (antiguedad==5){
	printf("\n\n$500.00\n\n");}
if (antiguedad>5){
	printf("\n\n$1000.00\n\n");}
return 0;
}

