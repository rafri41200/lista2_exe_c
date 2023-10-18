#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

  setlocale(LC_ALL, "portuguese_Brazil");

  int teste;

  while (teste != 0) // while(1) tambÃ©m serve se eu acresentar um if com break em 0

  {
    printf("teste digite qualquer valor de 0 a 7 e clique enter. se digitar 0 sai do programa\n");
    scanf("%d", &teste);

    if (teste > 7 || teste < 0)
      puts("NÚMERO INVALIDO");
    if (teste == 1)
      puts("DOMINGO");
    if (teste == 2)
      puts("SEGUNDA-FEIRA");
    if (teste == 3)
      puts("TERCA-FEIRA");
    if (teste == 4)
      puts("QUARTA-FEIRA");
    if (teste == 5)
      puts("QUINTA-FEIRA");
    if (teste == 6)
      puts("SEXTA-FEIRA");
    if (teste == 7)
      puts("SÁBADO");
  }
  return 0;
}