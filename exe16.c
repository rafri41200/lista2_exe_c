#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  // soma dos n�meros divisiveis por 3 no intervalo de 0 a 100 e por 5 no intervalo de 100 a 200 pores s� com um la�o
  setlocale(LC_ALL, "portuguese_Brazil");

  int soma3 = 0, soma5 = 0;

  for (int i = 0; i <= 200; i++)
  {
    if (i < 100)
    {
      if (i % 3 == 0)
      {
        soma3 += i;
      }
    }
    if (i > 100 && i <= 200)
    {
      if (i % 5 == 0)
        soma5 += i;
    }
  }
  printf("A SOMA DOS N�MEROS DIVISIVEIS POR 3  NESSE INTERVALO �: %d e por 5 � %d\n", soma3, soma5);

  return 0;
}