#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  // SOMATÓRIO DE NÚMEROS PARES NUM INTERVAL A ATÉ B. INDEPENDENTE SE O USUÁRIO COLOCA A<B OU B>A O INTERVALO É ESSE.
  setlocale(LC_ALL, "portuguese_Brazil");

  int a, b, soma=0;

  printf(" DIGITE UM NÚMERO INTEIRO:\n");
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
    printf("A SOMA DOS NÚMERS PARES NESSE INTERVALO É: %d\n", soma);

  return 0;
}