
/*
*   Este programa foi escrito com a finalidade de modelar o estado de uma população durante o 
*   apocalipse zumbi. Para isto, foi utilizado os dados coletados por cientistas.
*/

#include <stdio.h>

#define VAZIO 0
#define HUMANO 1
#define ZUMBI 2

int main(void){

    int linhas, colunas, dias, matriz[50][50], matriz_copia[50][50], vizinhos[8],
    qtd_vizinhos_zumbis, qtd_vizinhos_humanos, qtd_vizinhos_vazios;


    /////////////////////////////////////////////
    //ENTRADA:
    //Recebe a quantidade de linhas e colunas
    scanf("%d %d", &linhas, &colunas);
    //Recebe os dias para simulação
    scanf("%d", &dias);
    //Recebe a matriz de entrada
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    ////////////////////////////////////////////

    for(int k = 0; k < dias; k++){
        //Mostra a iteracao e a condicao da população nela
        printf("iteracao %d\n", k);
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        //Copia a matriz original para a matriz de cópia
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                matriz_copia[i][j] = matriz[i][j];
            }
        }

        ///////////////////////////////////////////////
        //Modifica a matriz copia
        
        for(int i = 0; i < linhas; i++){
            for (int j = 0; j < colunas; j++){
                qtd_vizinhos_humanos = 0;
                qtd_vizinhos_vazios = 0;
                qtd_vizinhos_zumbis = 0;

                if(i > 0 && j > 0 && i < linhas - 1 && j < colunas - 1){
                    vizinhos[0] = matriz[i][j + 1];                 //direita
                    vizinhos[1] = matriz[i][j - 1];                 //esquerda
                    vizinhos[2] = matriz[i + 1][j];                 //baixo
                    vizinhos[3] = matriz[i - 1][j];                 //cima
                    vizinhos[4] = matriz[i - 1][j + 1];             //cima direita
                    vizinhos[5] = matriz[i - 1][j - 1];             //cima esquerda
                    vizinhos[6] = matriz[i + 1][j + 1];             //baixo direita
                    vizinhos[7] = matriz[i + 1][j - 1];             //baixo esquerda
                }else if(i == 0 && j == 0){
                    vizinhos[0] = matriz[i][j + 1];                 //direita
                    vizinhos[1] = matriz[i][colunas - 1];           //esquerda
                    vizinhos[2] = matriz[i + 1][j];                 //baixo
                    vizinhos[3] = matriz[linhas - 1][j];            //cima
                    vizinhos[4] = matriz[linhas - 1][j + 1];        //cima direita
                    vizinhos[5] = matriz[linhas - 1][colunas - 1];  //cima esquerda
                    vizinhos[6] = matriz[i + 1][j + 1];             //baixo direita
                    vizinhos[7] = matriz[i + 1][colunas - 1];       //baixo esquerda
                }else if(i == 0 && j == (colunas - 1)){
                    vizinhos[0] = matriz[i][0];                     //direita
                    vizinhos[1] = matriz[i][j - 1];                 //esquerda
                    vizinhos[2] = matriz[i + 1][j];                 //baixo
                    vizinhos[3] = matriz[linhas - 1][j];            //cima
                    vizinhos[4] = matriz[linhas - 1][0];            //cima direita
                    vizinhos[5] = matriz[linhas - 1][j - 1];        //cima esquerda
                    vizinhos[6] = matriz[i + 1][0];                 //baixo direita
                    vizinhos[7] = matriz[i + 1][j - 1];             //baixo esquerda
                }else if(i == (linhas - 1) && j == 0){
                    vizinhos[0] = matriz[i][j + 1];                 //direita
                    vizinhos[1] = matriz[i][colunas - 1];           //esquerda
                    vizinhos[2] = matriz[0][j];                     //baixo
                    vizinhos[3] = matriz[i - 1][j];                 //cima
                    vizinhos[4] = matriz[i - 1][j + 1];             //cima direita
                    vizinhos[5] = matriz[i - 1][colunas - 1];       //cima esquerda
                    vizinhos[6] = matriz[0][j + 1];                 //baixo direita
                    vizinhos[7] = matriz[0][colunas - 1];           //baixo esquerda
                }else if(i == (linhas - 1) && j == (colunas - 1)){
                    vizinhos[0] = matriz[i][0];                     //direita
                    vizinhos[1] = matriz[i][j - 1];                 //esquerda
                    vizinhos[2] = matriz[0][j];                     //baixo
                    vizinhos[3] = matriz[i - 1][j];                 //cima
                    vizinhos[4] = matriz[i - 1][0];                 //cima direita
                    vizinhos[5] = matriz[i - 1][j - 1];             //cima esquerda
                    vizinhos[6] = matriz[0][0];                     //baixo direita
                    vizinhos[7] = matriz[0][j - 1];                 //baixo esquerda
                }else if(i == 0 && j > 0 && j < colunas - 1){
                    vizinhos[0] = matriz[i][j + 1];                 //direita
                    vizinhos[1] = matriz[i][j - 1];                 //esquerda
                    vizinhos[2] = matriz[i + 1][j];                 //baixo
                    vizinhos[3] = matriz[linhas - 1][j];            //cima
                    vizinhos[4] = matriz[linhas - 1][j + 1];        //cima direita
                    vizinhos[5] = matriz[linhas - 1][j - 1];        //cima esquerda
                    vizinhos[6] = matriz[i + 1][j + 1];             //baixo direita
                    vizinhos[7] = matriz[i + 1][j - 1];             //baixo esquerda
                }else if(i == linhas - 1 && j > 0 && j < colunas - 1){
                    vizinhos[0] = matriz[i][j + 1];                 //direita
                    vizinhos[1] = matriz[i][j - 1];                 //esquerda
                    vizinhos[2] = matriz[0][j];                     //baixo 
                    vizinhos[3] = matriz[i - 1][j];                 //cima
                    vizinhos[4] = matriz[i - 1][j + 1];             //cima direita
                    vizinhos[5] = matriz[i - 1][j - 1];             //cima esquerda
                    vizinhos[6] = matriz[0][j + 1];                 //baixo direita
                    vizinhos[7] = matriz[0][j - 1];                 //baixo esquerda
                }else if(j == 0 && i > 0 && i < linhas - 1){
                    vizinhos[0] = matriz[i][j + 1];                 //direita
                    vizinhos[1] = matriz[i][colunas - 1];           //esquerda
                    vizinhos[2] = matriz[i + 1][j];                 //baixo 
                    vizinhos[3] = matriz[i - 1][j];                 //cima
                    vizinhos[4] = matriz[i - 1][j + 1];             //cima direita
                    vizinhos[5] = matriz[i - 1][colunas - 1];       //cima esquerda
                    vizinhos[6] = matriz[i + 1][j + 1];             //baixo direita
                    vizinhos[7] = matriz[i + 1][colunas - 1];       //baixo esquerda
                }else if(j == colunas - 1 && i > 0 && i < linhas - 1){
                    vizinhos[0] = matriz[i][0];                     //direita
                    vizinhos[1] = matriz[i][j - 1];                 //esquerda
                    vizinhos[2] = matriz[i + 1][j];                 //baixo 
                    vizinhos[3] = matriz[i - 1][j];                 //cima
                    vizinhos[4] = matriz[i - 1][0];                 //cima direita
                    vizinhos[5] = matriz[i - 1][j - 1];             //cima esquerda
                    vizinhos[6] = matriz[i + 1][0];                 //baixo direita
                    vizinhos[7] = matriz[i + 1][j - 1];             //baixo esquerda
                }

                //Conta a quantidade de cada tipo de vizinho
                for(int vizinho = 0; vizinho < 8; vizinho++){
                    switch (vizinhos[vizinho])
                    {
                    case VAZIO:
                        qtd_vizinhos_vazios++;
                        break;
                    case HUMANO:
                        qtd_vizinhos_humanos++;
                        break;
                    case ZUMBI:
                        qtd_vizinhos_zumbis++;
                        break;
                    default:
                        break;
                    }
                }

                //Alterando a matriz copia com base no valor da posição atual
                switch (matriz[i][j])
                {
                case VAZIO:
                    if(qtd_vizinhos_humanos == 2){
                        matriz_copia[i][j] = HUMANO;
                    }
                    break;
                case HUMANO:
                    if(qtd_vizinhos_zumbis >= 1){
                        matriz_copia[i][j] = ZUMBI;
                    }
                    break;
                case ZUMBI:
                    if(qtd_vizinhos_humanos >= 2 || qtd_vizinhos_humanos == 0){
                        matriz_copia[i][j] = VAZIO;
                    }
                    break;
                default:
                    //x permanece como está
                    break;
                }

            }            
        }
        /////////////////////////////////////////////
        //Copia a matriz de copia para a original
        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                matriz[i][j] = matriz_copia[i][j];
            }
        }

    }
    return 0;
}
