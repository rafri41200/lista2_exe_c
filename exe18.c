#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
  //
  setlocale(LC_ALL, "portuguese_Brazil");

  unsigned long long num1 = 1, num = 0;
  for (int i = 0; i < 64; i++)
  {
    num = num + num1;
    printf("%u\n", num);
    num1 *= 2;
  }

  return 0;
}