#include <stdio.h>
#include <string.h>

void Leer (char Cadena []);
void Imprimir (char Cadena []);

int main (void)
{
    char Frase [200];
    Leer (Frase);
    Imprimir (Frase);
}

void Leer (char Cadena [])
{
    printf ("A continuacion, ingrese una frase\n");
    gets (Cadena);
}

void Imprimir (char Cadena [])
{
    int i;
    for (i = 0; i < strlen (Cadena); i ++)
    {
        if (Cadena [i] == ' ')
            printf ("\n");
        else
            printf ("%c", Cadena [i]);
    }
    printf ("\n");
}
