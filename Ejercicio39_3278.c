/*Ejercicio 5.5
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
int main()
{
int matriz1[2][2]={0,0,25,25};
int a;
for (int f=0;f<2;f++){
	for (int c=0;c<2;c++){
		if (matriz1[2][c]!=0){
			a=1;
		}else{
			a=0;
		}}}
if (a=1){
	printf("La matriz es una diagonal");
}else{
		printf("La matriz no es una diagonal");
	}
	return 0;
}
