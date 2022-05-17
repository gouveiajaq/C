#include <stdio.h>

int main() {
    int A, B, soma;
    printf("Digite um número inteiro \n");
    scanf ("%d", &A);

    printf("Digite um segundo númeor inteiro \n");
    scanf("%d", &B);

    soma = A + B;
    printf("A soma dos números é = %d \n", soma);
    
    if (soma > 10){
      printf("A soma dos números é maior que 10");
    } else {
      printf("A soma dos números é menor que 10");
    }

    return 0;
}