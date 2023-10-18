#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

  setlocale(LC_ALL, "portuguese_Brazil");

  int f = 1, i = 0, n = 1;

  for (int j = 0; j < 10; j++)
  {
    n++;
    i++;
    for (; n >= 1; n--)
    {
      f = f * i;
    }
    printf("o fatorial de %d é: %d\n", i, f);
  }

  return 0;
}