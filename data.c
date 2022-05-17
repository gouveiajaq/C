#include <stdio.h>
typedef struct Data{
int dia;
int mes;
int ano;
}Data;
void ordena(struct Data vet[], int tam){
    Data aux; //vai ser o mesmo tipo do vetor, se n ele n consegue armazenar o valor
    int i, j;
    for(i=0; i<tam; i++){
      for(j=0; j<tam; j++){
        if(vet[i].ano >= vet[j].ano){
          if(vet[i].mes >= vet[i].mes){
            if(vet[i].dia < vet[j].dia){
              aux = vet[j];
              vet[j] = vet[i];
              vet[i]= aux;
            }
          }
        }
      }
    }
}

int main() {
  struct Data vet[3];
  int tam = 3;
  vet[0].ano = 2022;
  vet[0].mes = 4;
  vet[0].dia = 20;

  vet[1].ano = 2021;
  vet[1].mes = 3;
  vet[1].dia = 18;

  vet[2].ano = 2022;
  vet[2].mes = 4;
  vet[2].dia = 19;

  ordena(vet, tam);

  for(int i = 0; i < tam; i++){
    printf("Ano: %d\n", vet[i].ano);
    printf("Mes: %d\n", vet[i].mes);
    printf("Dia: %d\n\n", vet[i].dia);
  }
  return 0;
}