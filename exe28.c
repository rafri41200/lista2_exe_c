#include<stdio.h>
#include<stdlib.h>

int main(){
  /* esse programa vai pegar um valor em binário ,por exemplo, x=  1101101 e um valor y = 10, que é 1010 então ele vai
   pegar esse valor 1010 e valor trocar pelos 4 bits menos significativos de x , ficando x =110[1010]*/
  unsigned char X,Y;

    // Solicita ao usuário para inserir o valor de Y (não menor que 5)
    do {
        printf("Insira o valor de Y (>= 5): ");
        scanf("%hhu", &Y);
    } while (Y < 5);

    // Solicita ao usuário para inserir o valor de X
    printf("Insira o valor de X: ");
    scanf("%hhu", &X);

    // Mantém os 4 bits menos significativos de Y e substitui os 4 bits menos significativos de X por esses bits
    X = (X & 0xF0) | (Y & 0x0F);

    // Exibe o novo valor de X
    printf("O novo valor de X é: %hhu\n", X);

    return 0;
}
  


