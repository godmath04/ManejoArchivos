#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *archivo; // Variable tipo puntero
    char unCaracter;
    // Forma para validar un archivo
    if ((archivo = fopen("Reporte.txt", "r")) != NULL)
    {
        while (!feof(archivo))
        {
            unCaracter = fgetc(archivo);
            putchar(unCaracter);
        }
        fclose(archivo);

    }else
        {
            printf("Error con el archivo");
        }

        fclose(archivo);

        return 0;
    }
