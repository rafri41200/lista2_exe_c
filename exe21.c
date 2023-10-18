#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define control 10000

int main()
{
  setlocale(LC_ALL, "portuguese_Brazil");

  int palin = 0;
  int d1, d2, d3, d4, d5;

  do
  {
    printf(" digite um valor inteiro de 5 d�gitos\n");
    scanf("%d", &palin);
    if (palin < control)
      printf("*** N�MERO INV�LIDO. DIGITE UM N�MERO DE 5 D�GITOS ***\n");
  } while (palin < control);

  d1 = palin / 10000;
  d2 = (palin / 1000) % 10;
  // d3 = (palin / 100) % 10; não precisa
  d4 = (palin / 10) % 10;
  d5 = (palin / 1) % 10;

  palin = (d1 == d5) && (d2 == d4);

  if (palin)
  {
    printf("� um palindromo\n");
  }
  else
  {
    printf("n�o � um palindromo\n");
  }

  printf("\n*** FIM DO PROGRAMA ***\n");
  return 0;
}