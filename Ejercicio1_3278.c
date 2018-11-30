/*Area de un triangulo
 * autor:Hugo Braian Bonilla */
#include<stdio.h>
int main()
{
	int base,altura,area;
	printf("Escriba la base: ");
	scanf("%d",&base);
	printf("Escribe la altura: ");
	scanf("%d",&altura);
	if(altura>0 && base>0){
	area=(base*altura)/2;
	printf("\nEl area es: %d\n\n",area);
	}else{
		printf("\nNumero invalido\n\n");
	}

	return 0;
}
