#include <stdio.h>
#include <string.h>

int main(){

	char frase[150];
	char pala[150][150];
	int count=0,i=0,j=0,e=0;
	
	printf("ingrese una frase:\t");
	fgets(frase, 150, stdin);
	
	while(frase[i]!= '\0')
	{
		if(frase[i] != ' ')
		{
			pala[e][j++] = frase[i];
		}
		else
		{
			pala[e][j]= '\0';
			e++;
			j=0;
		}
		i++;
	}
	pala[e][j] = '\0';
	
	for(int y=e;y>=0;y--)
	{
		printf("%s", pala[y]);
		if(y > 0) printf(" ");
	}
	return 0;
	
	

}

