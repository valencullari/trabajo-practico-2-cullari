/*5. Escribe un programa que cuente el número de palabras en una cadena
ingresada por el usuario.*/
#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[140];
	int i,e=1;
	
	printf("ingrese una frase o palabra:\t");
	fgets(frase, sizeof(frase),stdin);
	
	for(i=0;i<strlen(frase);i++)
	{
		if(frase[i]== ' ')
		{
			e++;
		}
	}
	
	printf("cantidad de palabras:\t%d",e);
	
}
