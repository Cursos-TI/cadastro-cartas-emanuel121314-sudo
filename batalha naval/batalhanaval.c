#include <stdio.h>
#include <stdlib.h> 

#define TAM 10
#define HAB 5
#define NAVIO 3

int main() {
    int i, j;
    int centro = HAB / 2;

    
    // Tabuleiro 10x10 //
    
    int tabuleiro[TAM][TAM];
    for(i = 0; i < TAM; i++)
        for(j = 0; j < TAM; j++)
            tabuleiro[i][j] = 0; // 0 = água

    
     // Navios //
    
    int navioHorizontal[NAVIO] = {3, 3, 3};
    int navioVertical[NAVIO]   = {3, 3, 3};

    // navio horizontal //
    for(i = 0; i < NAVIO; i++)
        tabuleiro[2][1+i] = navioHorizontal[i];

    //  navio vertical //
    for(i = 0; i < NAVIO; i++)
        tabuleiro[5+i][5] = navioVertical[i];

    
    // Matrizes de habilidades 5x5 //
    
    int cone[HAB][HAB];
    int cruz[HAB][HAB];
    int octaedro[HAB][HAB];

    for(i = 0; i < HAB; i++) {
        for(j = 0; j < HAB; j++) {
            // Cone
            if(j >= centro - i && j <= centro + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;

            // Cruz //
            if(i == centro || j == centro)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;

            // Octaedro //
            if(abs(i - centro) + abs(j - centro) <= centro)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    
    // Pontos de origem das habilidades //
    
    int origemCone[2] = {1, 2}; // linha, coluna
    int origemCruz[2] = {7, 2};
    int origemOct[2]  = {5, 7};

    
    // Sobreposição das habilidades //
    
    for(i = 0; i < HAB; i++) {
        for(j = 0; j < HAB; j++) {
            int linha, coluna;

            // Cone //
            linha = origemCone[0] + i - centro;
            coluna = origemCone[1] + j - centro;
            if(linha >=0 && linha<TAM && coluna>=0 && coluna<TAM) {
                if(cone[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5; // 5 = área da habilidade
            }

            // Cruz //
            linha = origemCruz[0] + i - centro;
            coluna = origemCruz[1] + j - centro;
            if(linha >=0 && linha<TAM && coluna>=0 && coluna<TAM) {
                if(cruz[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }

            // Octaedro //
            linha = origemOct[0] + i - centro;
            coluna = origemOct[1] + j - centro;
            if(linha >=0 && linha<TAM && coluna>=0 && coluna<TAM) {
                if(octaedro[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    
    // tabuleiro
    
    printf("TABULEIRO COM NAVIOS E HABILIDADES\n");

    for(i = 0; i < TAM; i++) {
        for(j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]); // 0 = água, 3 = navio, 5 = habilidade
        }
        printf("\n");
    }

    return 0;
}