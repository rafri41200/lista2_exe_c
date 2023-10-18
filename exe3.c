#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int n = 1;
  unsigned f;

  while (n >= 0)
  {
    puts("digite um número. (numero negativo para sair)");
    scanf("%d", &n);

    for (f = 1; n > 1; n--)
    {
      f = f * n;
    }
    if (n >= 0)
      printf("o fatorial é %d\n", f);
  }

  puts("tchau");

  return 0;
}