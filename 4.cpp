#include <stdio.h>
#include <string.h>

int main(){
	
	int i,j;
	char frase[140],rem,let;
	
	printf("ingrese una frase o palabra:");
	fgets(frase, sizeof(frase),stdin);
	
	
	printf("que caracter desea remplazar:\t");
	scanf(" %c",&rem);
	
	printf("cual es el caracter que quiere colocar en su lugar:\t");
	scanf(" %c",&let);
	
	for(i=0;i<strlen(frase);i++)
	{
		if(frase[i]==rem)
		{
			frase[i]=let;
		}
	}
	printf("\n%s",frase);


}
