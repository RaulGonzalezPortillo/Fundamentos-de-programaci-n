#include <stdio.h>
#include <string.h>

void Leer (char Linea[]);
void Imprima (char Linea[]);
void Imprima2 (char *Linea);

int main (void)
{
  char Frase[200];
  Leer (Frase);
  printf ("La frase es:\n");
  puts (Frase);
  Imprima (Frase);
  Imprima2 (Frase);
}

void Leer (char Linea[])
{
  printf ("Introduzca una frase de hasta 199 caracteres\n");
  gets (Linea);
}

void Imprima (char Linea[])
{
  int i;
  for (i = 0; i < strlen(Linea); i++)
    printf ("%c", Linea[i]);
  printf ("\n");
}

void Imprima2 (char *Linea)
{
  while (*Linea != '\0')
    {
      printf ("%c\n", *Linea);
      Linea++;
    }
}
