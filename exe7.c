#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int valor1, valor2 = 0;
  float divisao;

  printf("me dê um valor\n");
  scanf(" %d", &valor1);

  while (valor2 == 0)
  {
    printf("dê-me um segundo valor\n");
    scanf(" %d", &valor2);
    if (valor2 == 0)
      puts("\nnão pode ser nulo. toma vergonha na cara\n");
  }

  divisao = (float)valor1 / valor2;
  printf("a divisão entre %d e %d é %.2f", valor1, valor2, divisao);

  return 0;
}