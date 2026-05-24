#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[10][10];
    int navioVertical[3];
    int navioHorizontal[3];

    //Primeiras posições navio vertical
    int linhaVertical = 6;
    int colunaVertical = 1;

    //Primeiras posições navio horizontal
    int linhaHorizontal = 4;
    int colunaHorizontal = 2;

    //Variáveis auxiliares
    int i, j;

    //Inicializa o tabuleiro com 0, representando água
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //Inicializa os vetores dos navios com 3
    for(i = 0; i < 3; i++){
        navioVertical[i] = 3;
        navioHorizontal[i] = 3;
    }

    //Posiciona o navio vertical
    for(i = 0; i < 3; i++){
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    //Posiciona o navio horizontal
    for(i = 0; i < 3; i++){
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    //Exibe o tabuleiro
    printf("***TABULEIRO DE BATALHA NAVAL:***\n\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}