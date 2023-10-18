#include<stdio.h>
#include<locale.h>

int main(){
  
  setlocale(LC_ALL, "portuguese");
  
  int termo1=0, termo2=1,aux;
  
  printf("%d\n", termo2);

  for (int i = 0; i < 19; i++)
  {
    aux=termo1 + termo2;
    termo1 = termo2;
    termo2 = aux;
   
    printf("\n%d\n", aux);
  }
  printf("\ntchau\n");

  return 0;
}