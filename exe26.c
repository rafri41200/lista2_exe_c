#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese_Brazil");
  int mask = 1;
  int binario;
  for (int i = 1; i <= 10; i++)
  {
    printf("\n");
    printf("decimal %d\n", i);
    printf("hexadecimal %x\n", i);
    printf("octal %o\n", i);
    for (int b = 7; b >=0 ; b--)
    {
      int x = i;
      binario = (x >> b) & mask;
      printf("%d", binario);
    } 
  }

  return 0;
}