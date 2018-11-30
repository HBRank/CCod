/*Ejercicio 3.5
 * autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
#include<string.h>
char n1[50],n2[50],n3[50];
int ed1,ed2,ed3;
int main(){
	printf("\n\nEscibe el primer nomrbe: ");
	scanf("%s",n1);

	printf("\n\nEscibe la primera edad: ");
	scanf("%i",&ed1);

	printf("\n\nEscibe el segundo nomrbe: ");
	scanf("%s",n2);

	printf("\n\nEscibe la segunda edad: ");
	scanf("%i",&ed2);
	printf("\n\nEscibe el tercer nomrbe: ");
	scanf("%s",n3);
	printf("\n\nEscibe la tercera edad : ");
	scanf("%i",&ed3);
	if (ed1>=0 && ed1<18){
	printf("\n\n%s\n",n1);
	}
	if (ed2>=0 && ed2<18){
	printf("\n%s\n",n2);
	}
	if (ed3>=0 && ed3<18){
	printf("\n%s\n\n",n3);
	}
return 0;
}
