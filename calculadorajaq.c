#include <stdio.h>

int main()
{
    float num1, num2, soma, subtracao, multi, div;

    printf("Calculadora da Jaque\n");
    printf ("Digite seu primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf( "A soma é: %3.1f\n", soma );
    printf( "A subtracao é: %3.1f\n", subtracao );
    printf( "O produto é: %3.1f \n", multi );
    printf( "A divisão é: %3.1f \n", div );

    return 0;
}
  