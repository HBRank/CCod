/*Contar el numero de vocales y de consinantes en un nombre
 * Autor:Hugo Braian Bonilla Rodriguez*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int contarVocales(char carac_c[100])
{
	int i=0,c=0,contAlpha=0;
while (i<100)
	{
switch(carac_c[i]){
	case 'a':c++; break;
	case 'e':c++; break;
	case 'i':c++; break;
	case 'o':c++; break;
	case 'u':c++; break;
	case 'A':c++; break;
	case 'E':c++; break;
	case 'I':c++; break;
	case 'O':c++; break;
	case 'U':c++; break;
}
i++;
	}

return c;
}
int contarConsonantes(char carac_b[100],int voc)
{
	int i=0,contAlpha=0,cons=0;
while (i<100)
	{
if (isalpha(carac_b[i]))
{
	contAlpha++;
}
i++;
}
cons=contAlpha-voc;
return cons;
}
int main()
{
	char nombre[100]="";
	int i=0,vocales=0,consonantes=0;
	int contAlpha=0;
	int c=0;
	printf("\nEscriba el nombre: ");
	scanf("%[^\n]",nombre);
	vocales=contarVocales(nombre);
	consonantes=contarConsonantes(nombre,vocales);
printf("\n\nVocales: %i",vocales);
printf("\n\nConsonantes: %i",consonantes);
printf("\n\nNombre: %s \n\n",nombre);
return 0;
}
