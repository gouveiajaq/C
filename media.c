#include <stdio.h>
double media (double v[], int tam){
  double cont = 0; //acomuladora
  int i;
    for (i=0; i<tam; i++){
      cont = cont + v[i]; 
    }
  return cont / tam;
}

int main() {
  double testando[500];
  int numero;
  scanf("%d", &numero);
  for(int i = 0; i < numero; i++){
    scanf("%lf", &testando[i]);
  }

  printf("%lf\n", media(testando, numero));
  
  return 0;
}