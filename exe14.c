#include <stdio.h>
#include <locale.h>

int main()
{
  // QUANTIDADE DE N�EMROS DIVISIVEIS POR 3 NO INTERVALO A , B . INDEPENDENTE SE A>B OU A<B
  setlocale(LC_ALL, "portuguese");
   int a, b, cont=0;

  printf(" DIGITE UM N�MERO INTEIRO:\n");
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
    printf(" A QUANTIDADE DE N�MEROS DIVIS�VEIS POR 3 �: %d\n", cont);

  return 0;
}