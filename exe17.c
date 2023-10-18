#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  //
  setlocale(LC_ALL, "portuguese_Brazil");

  int  f;

  for (int i = 10; i <= 100; i += 10)
  {
    printf("Graus em celcius: %dº\n", i);
    f = i * 1.8 + 32;
    printf("Graus em Fahrenheit: %d \n", f);
  }

  return 0;
}