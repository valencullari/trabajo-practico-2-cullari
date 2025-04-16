#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int opcion;
    
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Seleccione una opción:\n");
    printf("1) Mostrar la oracion toda en mayuscula\n");
    printf("2) Mostrar la oracion toda en minuscula\n");
    printf("3) Mostrar la oracion alternando mayuscula y minuscula\n");
    printf("4) Mostrar la oracion comenzando cada palabra con mayuscula\n");
    scanf("%d", &opcion);
    
    int mayuscula = 1, inicio_palabra = 1;
    
    switch (opcion) {
        case 1:
            for (int i = 0; cadena[i] != '\0'; i++) 
			{
                if (cadena[i] >= 'a' && cadena[i] <= 'z')
				{
                    cadena[i] -= 32;
                }
            }
            
            break;
            
        case 2:
        	
            for (int i = 0; cadena[i] != '\0'; i++)
			{
                if (cadena[i] >= 'A' && cadena[i] <= 'Z')
				{
                    cadena[i] += 32;
                }
            }
            break;
        case 3:
            for (int i = 0; cadena[i] != '\0'; i++) {
                if ((cadena[i] >= 'A' && cadena[i] <= 'Z') || (cadena[i] >= 'a' && cadena[i] <= 'z')) 
				{
                    if (mayuscula) 
					{
                        if (cadena[i] >= 'a' && cadena[i] <= 'z') 
						{
                            cadena[i] -= 32;
                        }
                    } 
					else 
					{
                        if (cadena[i] >= 'A' && cadena[i] <= 'Z') 
						{
                            cadena[i] += 32;
                        }
                    }
                    mayuscula = !mayuscula;
                }
            }
            break;
        case 4:
            for (int i = 0; cadena[i] != '\0'; i++)
			{
                if ((cadena[i] >= 'A' && cadena[i] <= 'Z') || (cadena[i] >= 'a' && cadena[i] <= 'z'))
				{
                    if (inicio_palabra)
					{
                        if (cadena[i] >= 'a' && cadena[i] <= 'z')
						{
                            cadena[i] -= 32;
                        }
                        inicio_palabra = 0;
                    } 
					else
					{
                        if (cadena[i] >= 'A' && cadena[i] <= 'Z')
						{
                            cadena[i] += 32;
                        }
                    }
                } else
				{
                    inicio_palabra = 1;
                }
            }
            break;
        default:
            printf("Opción no válida.\n");
            return 1;
    }
    
    printf("Resultado: %s\n", cadena);
    
    return 0;
}

