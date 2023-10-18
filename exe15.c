#include <stdio.h>
#include <locale.h>
#include<math.h>

int main()
{
  // RESULTADO DA POTÊNCIA NA BASE 3 COM EXPOENTE DE 0 A 7
  setlocale(LC_ALL, "portuguese");
  
  int pot;

  for (int i = 0; i < 8; i++)
  {
    pot = pow(3,i);
    printf("%d\n", pot);
  }
  
 return 0;
}