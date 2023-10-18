#include <stdio.h>
#include <locale.h>

int main()
{
  // Tabuada de qualquer número inteiro
  setlocale(LC_ALL, "portuguese");

  int num, prod;

  printf(" DIGITE UM NÚMERO :\n");
  scanf("%d", &num);

  printf("***** TABUADA *****");
  for (int i = 0; i < 10; i++)
  {
    prod = num * (i + 1);
    printf("     \n%d\n", prod);
  }

  return 0;
}