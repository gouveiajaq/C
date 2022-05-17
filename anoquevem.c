#include <stdio.h>

int main() {
    int idade, idade_nova;
printf("Olá, por favor insira a sua idade:\n");
scanf("%d", &idade);
idade_nova = idade + 1;
printf("No ano que vem você terá %d anos.", idade_nova );
    return 0;
}
