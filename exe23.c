#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "portuguese_Brazil");
  
  // pr�-incremento e p�s-incremento
  
  int x=5,y=6,a,b;

  //pr�-incremento

  a = ++x;
  printf("\no valor de a �: %d e o de x � %d\n", a, x);
  
  // p�s-incremento
  b = y++;
  printf("\no valor de b �: %d e o de y � %d\n", b, y);

  return 0;

}