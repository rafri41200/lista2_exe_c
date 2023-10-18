#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define control 99999999

int main()
{
  setlocale(LC_ALL, "portuguese_Brazil");

  int d1, d2, d3, d4, d5, d6, d7, d8;
  int num=100000000;
  int cont=0;
  
    do{
    printf(" digite um valor inteiro de até 8 dígitos\n");
    scanf("%d", &num);
    if ( num > control) printf("esse valor não vale, digite um de até 8 digitos");
    }while( num > control);
    for (int i = 0; i < 8; i++)
    {
      int digito = num % 10; // pegando o digito mais à direita
      if(digito == 7) 
         cont++; 

    num /= 10; // eliminando os digitos da direita a medida que eles forem analisados
    }
    printf("quantidade de setes que tem nesse número: \n%d\n", cont); 

      return 0;
}
    
/* maneira burra de fazer>>>
    d1 = num / 10000000;
    d2 = (num / 1000000)%10;
    d3 = (num / 100000)%10;
    d4 = (num / 10000)%10;
    d5 = (num / 1000)%10;
    d6 = (num / 100)%10;
    d7 = (num / 10)%10;
    d8 = num %10;

    if (d1 == 7) cont+=1;
    if (d2 == 7) cont+=1;
    if (d3 == 7) cont+=1;
    if (d4 == 7) cont+=1;
    if (d5 == 7) cont+=1;
    if (d6 == 7) cont+=1;
    if (d7 == 7) cont+=1;
    if (d8 == 7) cont+=1;
    */
    
    