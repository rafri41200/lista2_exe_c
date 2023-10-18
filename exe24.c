/*#include <stdio.h>

int main() {
    int cateto1, cateto2, hipotenusa;

    printf("Triplas de Pitágoras (cateto1, cateto2, hipotenusa):\n");
    for(cateto1 = 1; cateto1 <= 500; cateto1++) {
        for(cateto2 = 1; cateto2 <= 500; cateto2++) {
            for(hipotenusa = 1; hipotenusa <= 500; hipotenusa++) {
                if(cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }

    return 0;
    }*/

#include <stdio.h>
#define limite 500
int main()
{

  printf("Triplas de Pitágoras:\n");

  for (int hipotenusa = 1; hipotenusa <= limite; hipotenusa++)
  {
    for (int cateto1 = 1; cateto1 <= limite; cateto1++)
    {
      for (int cateto2 = 1; cateto2 <= limite; cateto2++)
      {
        // Verificar se a soma dos quadrados dos catetos é igual ao quadrado da hipotenusa
        if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa)
        {
          printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
        }
      }
    }
  }

  return 0;
}