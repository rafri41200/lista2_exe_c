#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  // SOMAT�RIO DE N�MEROS PARES NUM INTERVAL A AT� B. INDEPENDENTE SE O USU�RIO COLOCA A<B OU B>A O INTERVALO � ESSE.
  setlocale(LC_ALL, "portuguese_Brazil");

  int a, b, soma=0;

  printf(" DIGITE UM N�MERO INTEIRO:\n");
  scanf("%d", &a);
  printf(" AGORA DIGITE OUTRO VALOR: \n");
  scanf("%d", &b);
  
  int min_valor = a < b? a : b;
  int max_valor = a > b? a : b;
  
    for (int i = min_valor; i <= max_valor; i++)
    {
      if (i % 2 == 0 )
      {
        soma += i;
      }
    }
    printf("A SOMA DOS N�MERS PARES NESSE INTERVALO �: %d\n", soma);

  return 0;
}