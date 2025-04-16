#include <stdio.h>
#include <string.h>

int main(){
	
	int i;
	char frase[140];
	
	printf("ingrese una palabra:\t");
	scanf("%s",frase);
	
	for(i=0;i<strlen(frase);i++)
	{
		if(frase[i]!=frase[strlen(frase)-i-1])
		{
			printf("\nno es palindromo");
			return 0;
		}	
	}		
	printf("es palindromo");
	return 0;
}
