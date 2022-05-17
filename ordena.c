#include <stdio.h>
#include <string.h>
#define MAX 3

typedef struct Produto{
char nome[80];
double preco;
int quantidade;
}Produto;

void ordenaPreco(Produto vet[MAX]);

void recebeProdutos (Produto prodPreco[MAX]){

    for(int i=0; i < MAX; i++){
      printf("Insira o nome do produto:\n ");
      getchar();
      fgets(prodPreco[i].nome, 80, stdin);
      prodPreco[i].nome [strlen(prodPreco[i].nome)-1] = '\0';
     
      printf("Insira o preço: \n" );
      scanf("%lf", &prodPreco[i].preco);

      printf("Insira a quantidade:\n");
      scanf("%d", &prodPreco[i].quantidade);
     
    }
 
 
}
 void ImpressaoProd (Produto prodPreco [MAX]){
     for(int i=0; i<MAX; i++){
         printf("%.2lf ", prodPreco[i].preco);
     }
 }
int main() {
    Produto prodPreco [MAX];  
    recebeProdutos(prodPreco);
    printf("Desordenado!!! \n");
    ImpressaoProd (prodPreco);
    ordenaPreco(prodPreco);
    printf("\n ORDENADOOOO!! \n ");
    ImpressaoProd (prodPreco);
   
    return 0;
}
  void ordenaPreco(Produto vet[MAX]){
    Produto aux;
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=i+1; j<MAX; j++){
           if(vet[i].preco>vet[j].preco){
                aux= vet[i];
                vet[i] = vet [j];
                vet[j] = aux;
           }
        }
    }
  }