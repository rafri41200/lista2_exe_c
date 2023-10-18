/*#include <stdio.h>

int main()
{

  int maior_numero = 0, menor_numero = 1000000, n;

  while (1)
  {
    printf("DIGITE UM NMERO: (digite 0 para sair) \n");
    scanf("%d", &n);

    if (n == 0)
      break;

    if (n > maior_numero)
    {
      maior_numero = n;
      printf("%d e o maior numero \n", maior_numero);
    } else
    if (n < menor_numero)
    {
      menor_numero = n ;
      printf("%d e o menor numero\n", menor_numero);
    }
  }

  return 0;
}*/

#include <stdio.h>

int main() {
    int n;
    int maior = 0;
    int menor = 0;
    int primeiro = 1;

    printf("Digite um valor (ou zero para sair): ");
    scanf("%d", &n);

    while (n != 0) {
        if (primeiro) {
            maior = n;
            menor = n;
            primeiro = 0;
        } else {
            if (n > maior) {
                maior = n;
            }
            if (n < menor) {
                menor = n;
            }
        }

        printf("Digite um valor (ou zero para sair): ");
        scanf("%d", &n);
    }

    if (primeiro) {
        printf("Nenhum valor foi inserido.\n");
    } else {
        printf("Maior termo fornecido: %d\n", maior);
        printf("Menor termo fornecido: %d\n", menor);
    }

    return 0;
}
  