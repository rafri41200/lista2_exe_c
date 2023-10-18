#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  //
  setlocale(LC_ALL, "portuguese_Brazil");

  int a, b, qtd, soma=0;
  float media;

  printf(" DIGITE UM NÚMERO INTEIRO:\n");
  scanf("%d", &a);
  printf(" AGORA DIGITE OUTRO VALOR: \n");
  scanf("%d", &b);

  int min_valor = a < b ? a : b;
  int max_valor = a > b ? a : b;

  for (int i = min_valor; i <= max_valor; i++)
  {
    soma += i;  
  }
  qtd = (max_valor - min_valor) + 1;
  media = (float)soma / qtd;
  printf(" A a media da soma dos valores desse intervalo é %.2f", media);

  return 0;
}