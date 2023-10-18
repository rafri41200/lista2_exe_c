#include<stdio.h>
#include<locale.h>

int main(){
  
  setlocale(LC_ALL, "portuguese");

  float valormercadoria,entrada;
  int parcela;

  printf("qual o valor da mercadoria?\n");
  scanf(" %f", &valormercadoria);

  parcela = (int)valormercadoria / 3;
  entrada = valormercadoria - parcela*2;

  printf("o valor da entrada é %.2f mais duas parcelas de %d\n", entrada, parcela);
 return 0;
}