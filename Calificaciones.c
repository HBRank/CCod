#include<stdio.h>
int cal[8];
float suma=0,promedio;
int main()
{
	for (int i=0;i<8;i++)
	{
		printf("\nIntroduce la calificacion: ");
		scanf("%d",&cal[i]);
		suma=suma+cal[i];
	}
	promedio=suma/8;
	printf("\n\nEl promedio es: %.2f \n\n",promedio);
	
	
return 0;
}
