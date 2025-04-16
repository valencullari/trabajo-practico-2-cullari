#include <stdio.h>
#include <string.h>
 int main(){
 	
	char frase[120],frase2[120];
	int i,j,e=0;
	
	printf("ingrese una palabra:");
	fgets(frase, sizeof(frase),stdin);
	
	printf("ingrese otra palabra:");
	fgets(frase2, sizeof(frase2),stdin);
	
	if(strlen(frase)==strlen(frase2))
	{
		for(i=0;i<strlen(frase);i++)
		{
			for(j=0;j<strlen(frase);j++)
			{
				if(frase[i]==frase2[j])
				{
					e++;
					break;
				}
			}
		}
		if(e==strlen(frase))
		{
			printf("son anagramas");
		}
		if(e!=strlen(frase))
		{
			printf("no son anagramas");
		}
	
		
	}
	
	if(strlen(frase)!=strlen(frase2))
	{
		printf("no son anagramas");
	}
		
	
	
 }
