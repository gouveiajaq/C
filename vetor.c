#include <stdio.h>

int main() {
    int vet[5]= {0,0,0,0,0};
    int i;
  for (i=0; i<5; i++){
    printf("Olá, insira o numero da posição: %d ", i);
    scanf("%d", &vet[i]);
  }
  for (i=0; i<5; i++){
    printf("%d ",vet[i]);
    }
  return 0;
}