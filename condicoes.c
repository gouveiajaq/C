#include <stdio.h>

int main() {
    int dado;
  printf("Digite 1 ou 2 \n"); // agr quero que ele digite ou 1 ou 2, digitando qualquer um desses está correto, ok?
  scanf("%d", &dado);

  if (dado == 1 || dado == 2){ // basta que uma seja correta, pois estamos usando o OU
    printf("O valor está correto! \n");
  }
    return 0;
}