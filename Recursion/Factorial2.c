#include <stdio.h>

void Factorial (int Num, long *Res);

void main ()
{
  int Num;
  long Res;
  printf ("Calculo (recursivo) del factorial de un numero\n");
  printf ("Ingresa el numero: ");
  scanf ("%d", &Num);
  Factorial (Num, &Res);
  printf ("Factorial de %d = %ld\n", Num, Res);
}

void Factorial (int Num, long *Res)
{
  printf ("Entrada a factorial: Num = %d, *Res = %ld\n", Num, *Res);
  if (Num > 1)
    Factorial (Num - 1, Res);
  else
    *Res = 1;
  *Res *= Num;
  printf ("Salida del factorial: Num = %d, *Res = %ld\n", Num, *Res);
}
