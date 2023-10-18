#include <stdio.h>

int main()
{

  int altura_pedro = 150, altura_jose = 130;
  int anos = 0;

  while (altura_pedro >= altura_jose)
  {
    altura_pedro += 2;
    altura_jose += 3;
    anos++;
  }

  printf(" jose ultrapassara pedro depois de %d", anos);

  return 0;
}