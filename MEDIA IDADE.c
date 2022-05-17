#include <stdio.h>
#include <string.h>

struct Aluno {
int RA;
int idade;
} ;
void calcular (struct Aluno calculaAluno [4], int i){
  double media = 0;
  for(i=0; i<4; i++){
    media = media + calculaAluno[i].idade / 4;
} 
  printf("Média de idade é = %.2f\n", media);
  }
void impressao(struct Aluno leAluno [], int i){
  for (i=0; i<4; i++){
    printf("Digite o RA: ");
    scanf("%d", &leAluno[i].RA);
    getchar();
    printf("Digite uma Idade: ");
    scanf("%d", &leAluno[i].idade);
    getchar();
  }for(i=0; i<4; i++){
    printf(" %d %d \n ",leAluno[i].RA,leAluno[i].idade);
    }

}
int main() {
  struct Aluno leAluno[4];
  int i;
  impressao(leAluno,4);
  calcular (leAluno, 4);
  return 0;
}