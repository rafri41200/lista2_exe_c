#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num = 0, nummaior, nummenor, produto;
  int primeiroacesso = 1;
  printf("\ndigite numeros que quiser e vmaos lhe dizer o maior e o menor( a condicao de saida e numero negativo)\n");
  while (num >= 0)
  {
    printf("\nqual numero voce deseja?\n");
    scanf("%d", &num);

    if (primeiroacesso)
    {
      nummaior = num;
      nummenor = num;

      primeiroacesso = 0;
    }
    if (num < 0)
    {
      break;
    }
    if (num > nummaior)
    {
      nummaior = num;
    }
    if (num < nummenor)
    {
      nummenor = num;
    }
  }
  printf("maior numero: %d\n", nummaior);
  printf("menor numero: %d\n", nummenor);
  produto = nummaior * nummenor;
  printf("o produto entre o maior e o menor numero: %d", produto);
  return 0;
}