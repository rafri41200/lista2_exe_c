#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "portuguese_Brazil");
  
  // pré-incremento e pós-incremento
  
  int x=5,y=6,a,b;

  //pré-incremento

  a = ++x;
  printf("\no valor de a é: %d e o de x é %d\n", a, x);
  
  // pós-incremento
  b = y++;
  printf("\no valor de b é: %d e o de y é %d\n", b, y);

  return 0;

}