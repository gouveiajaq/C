#include <stdio.h>

int main() {
    int dado;
  printf("Digite um valor entre 1 e 10 \n");
  scanf("%d", &dado);

  // se o meu numero está entre [1....10]
  if (dado >= 1 &&  dado <= 10){
    printf("O valor está correto! \n");
  }else {
    printf("O valor está errado! \n");
  }
    return 0;
}