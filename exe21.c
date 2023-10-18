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
    printf(" digite um valor inteiro de 5 dÍgitos\n");
    scanf("%d", &palin);
    if (palin < control)
      printf("*** NÚMERO INVÁLIDO. DIGITE UM NÚMERO DE 5 DÍGITOS ***\n");
  } while (palin < control);

  d1 = palin / 10000;
  d2 = (palin / 1000) % 10;
  // d3 = (palin / 100) % 10; nÃ£o precisa
  d4 = (palin / 10) % 10;
  d5 = (palin / 1) % 10;

  palin = (d1 == d5) && (d2 == d4);

  if (palin)
  {
    printf("é um palindromo\n");
  }
  else
  {
    printf("não é um palindromo\n");
  }

  printf("\n*** FIM DO PROGRAMA ***\n");
  return 0;
}