#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese_Brazil");

  int num = 4;
  float pi1 = 0, pi2, den1 = 3, den2 = 1, pitotal, a = 0, b = 0;
  for (int i = 0; i < 10000; i++)
  {
    if (i % 2) // impar
    {
      pi1 = -(num / den1);
      printf("termo %d\n", i);
      den1 += 4;
      a = a - pi1;
    }
    else
    {
      pi2 = (num / den2);
      den2 += 4;
      printf("termo:%d\n", i);
      b = b - pi2;
    }
    pitotal = (b + a)*-1;
    printf("pitotal:%.5f\n", pitotal);
    printf("\n");
  }

  return 0;
}