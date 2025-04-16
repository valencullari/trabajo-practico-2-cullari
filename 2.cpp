#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int contador = 0;
    
    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    
    size_t len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n')
	{
        cadena[len - 1] = '\0';
    }
    
    for (int i = 0; cadena[i] != '\0'; i++) 
	{
        char c = cadena[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
			{
            contador++;
        }
    }
    
    printf("La cantidad de vocales en la cadena es: %d\n", contador);
    
    return 0;
}

