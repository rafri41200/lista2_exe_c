#include <stdio.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "portuguese");
  int x=0,i=0;

  while(x<90)
  { 
    i++;
    x = (i + 1) * 4;
    if (x > 15 && x < 90)
    {
      printf("%d\n", x);
    }
  }
  return 0;
}