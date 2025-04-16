#include <stdio.h>
#include <string.h>


int main() {
    
	
	char palabras[5][100];
    char subcadena[100];
    int e;
    
    printf("Ingrese 5 palabras:\n");
    for (int i = 0; i < 5; i++) {
        fgets(palabras[i], 100, stdin);
        palabras[i][strcspn(palabras[i], "\n")] = 0;
    }
    
    printf("Ingrese una subcadena a buscar:\t");
    fgets(subcadena, 100, stdin);
    subcadena[strcspn(subcadena, "\n")] = 0;
    
    e = 1;
    for (int i = 0; i < 5; i++) {
        if (strstr(palabras[i], subcadena) == NULL) {
            e = 0;
            break;
        }
    }
    
    if (e==1) {
        printf("La subcadena \"%s\" se encuentra en todas las palabras.\n", subcadena);
    } else {
        printf("La subcadena \"%s\" NO se encuentra en todas las palabras.\n", subcadena);
    }
    
    return 0;
}

