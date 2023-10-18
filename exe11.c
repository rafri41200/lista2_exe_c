#include <stdio.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "portuguese");
  int x = 0, i = 0, a, b;

  printf("diga um número:\n");
  scanf("%d", &a);
  printf("agora digite outro número\n");
  scanf("%d", &b);

  while (x < 90)
  {
    i++;
    x = (i + 1) * 4;
    if (a < b)
    {
      if (x > a && x < b)
      {
        printf("%d\n", x);
      }
    }
    else
    {
      if (x < a && x > b)
      {
        printf("%d\n", x);
      }
    }
  }

  return 0;
}