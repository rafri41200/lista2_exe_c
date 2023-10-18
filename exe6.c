#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");

  int voto=0, confirma,votos_totais;
  int voto1 = 0, voto2 = 0, votonulo = 0, votobranco = 0;
  float voto_paula, voto_renata, voto_b, voto_n;

  while (voto >= 0)
  {

    printf("\n Em qual candidato voc� deseja votar? (5) Paula e (7) Renata\n\n");
    scanf(" %d", &voto);
    if (voto < 0)
    {
      break;
    }
    printf("\n Voc� confirma seu voto digite (1) para sim ou (2) para n�o\n\n");
    scanf(" %d", &confirma);

    if (confirma == 1)
    {
      if (voto == 5)
      {
        voto1 += 1;
      }
      else if (voto == 7)
      {
        voto2 += 1;
      }
      else if (voto == 0)
      {
        votobranco += 1;
      }
      else
      {
        printf("voto inv�lido(nulo)\n");
        votonulo += 1;
      }
    } else if (confirma == 2)
    {
      printf("voto n�o computado\n");
    }
    else
    {
      printf("op��o inv�lida\n");
    }
  }
 
  votos_totais = voto1 + voto2 + votobranco + votonulo;
  voto_paula = (float)voto1 / votos_totais *100;
  voto_renata = (float)voto2 / votos_totais *100;
  voto_b = (float)votobranco / votos_totais *100;
  voto_n = (float)votonulo / votos_totais *100;
 
  printf("\n******** PORCENTAGEM DE VOTOS ********\n\n");
  printf("a quantidade de votos da paula � : %.2f%%\ne da renata: %.2f%% \n", voto_paula, voto_renata);
  printf("voto nulo: %.2f%%\n", voto_n);
  printf("votos brancos: %.2f%%\n", voto_b);
  printf("\n ** RESULTADO ** \n\n");
  if(voto_paula > voto_renata) puts("VIT�RIA DA PAULA!\n");
  if(voto_paula < voto_renata) puts("VIT�RIA DA RENATA\n");
  if(voto_paula == voto_renata) puts("EMPATE . SEGUE NO SEGUNDO TURNO\n");
  return 0;
}