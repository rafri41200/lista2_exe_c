#include <stdio.h>
#include <locale.h>

int main()
{
  // QUANTIDADE DE NÚEMROS DIVISIVEIS POR 3 NO INTERVALO A , B . INDEPENDENTE SE A>B OU A<B
  setlocale(LC_ALL, "portuguese");
   int a, b, cont=0;

  printf(" DIGITE UM NÚMERO INTEIRO:\n");
  scanf("%d", &a);
  printf(" AGORA DIGITE OUTRO VALOR: \n");
  scanf("%d", &b);
  
  int min_valor = a < b? a : b;
  int max_valor = a > b? a : b;
  
    for (int i = min_valor; i <= max_valor; i++)
    {
      if (i % 3 == 0 )
      {
        cont+=1;
      }
    }
    printf(" A QUANTIDADE DE NÚMEROS DIVISÍVEIS POR 3 É: %d\n", cont);

  return 0;
}