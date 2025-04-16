#include <stdio.h>
#include <string.h>


int main() {
    
    
	char frase[120], sub[40];
    char *ptr;
    
    
    printf("Ingrese una cadena: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = 0; 

    printf("Ingrese una subcadena: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = 0; 
    
    ptr = strstr(frase, sub);
    
    if (ptr != NULL)
	{
        int posicion = ptr - frase;  
        printf("la subcadena [%s] se encuentra en la cadena [%s] en la posicion numero:\t%d",sub,frase,posicion, sub, posicion, frase);
    } 
	else
	{
        printf("La subcadena [%s] no se encontro en la cadena [%s]\n", sub, frase);
    }
    
    return 0;
}


