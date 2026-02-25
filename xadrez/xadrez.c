#include <stdio.h>


void moverCavalo(int movimentosRestantes) {
    if (movimentosRestantes == 0) return; 

    int opcao;

    printf("Movimento do cavalo, movimentos restantes: %d\n", movimentosRestantes);
    printf("Escolha a direção do L:\n");
    printf("1 = cima e direita\n");
    printf("2 = cima e esquerda\n");
    printf("3 = baixo e direita\n");
    printf("4 = baixo e esquerda\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Movimento: 2 casas para cima, 1 casa para direita\n");
            break;
        case 2:
            printf("Movimento: 2 casas para cima, 1 casa para esquerda\n");
            break;
        case 3:
            printf("Movimento: 2 casas para baixo, 1 casa para direita\n");
            break;
        case 4:
            printf("Movimento: 2 casas para baixo, 1 casa para esquerda\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    
    moverCavalo(movimentosRestantes - 1);
}

int main() {
    int cima, casas, i;
    char sentido;
    int casas2, i2;
    char direcao;
    int movimentosCavalo;

    // MOVIMENTO DA TORRE //
    printf("Movimento da torre\n");
    do {
        printf("Digite quantas casas a torre deve ir para cima, no máximo 3 casas: ");
        scanf("%d", &cima);

        if (cima == 1) printf("Uma casa para cima\n");
        else if (cima == 2) printf("Duas casas para cima\n");
        else if (cima == 3) printf("Três casas para cima\n");
        else printf("Valor inválido! Tente novamente.\n");

    } while (cima < 1 || cima > 3);

    // MOVIMENTO DA RAINHA //
    printf("\nMovimento da rainha\n");
    printf("Digite quantas casas a rainha deve se movimentar: ");
    scanf("%d", &casas);
    printf("Digite o sentido (c = cima, b = baixo, e = esquerda, d = direita): ");
    scanf(" %c", &sentido);

    for (i = 1; i <= casas; i++) {
        if (sentido == 'c') printf("Casa %d, cima\n", i);
        else if (sentido == 'b') printf("Casa %d, baixo\n", i);
        else if (sentido == 'e') printf("Casa %d, esquerda\n", i);
        else if (sentido == 'd') printf("Casa %d, direita\n", i);
        else {
            printf("Sentido inválido!\n");
            break;
        }
    }

    // MOVIMENTO DO BISPO //
    printf("\nMovimento do bispo\n");
    printf("Digite o número de casas: ");
    scanf("%d", &casas2);
    printf("Digite a diagonal (d = direita cima, e = esquerda cima): ");
    scanf(" %c", &direcao);

    for (i2 = 1; i2 <= casas2; i2++) {
        if (direcao == 'd') printf("Casa %d: cima, direita\n", i2);
        else if (direcao == 'e') printf("Casa %d: cima, esquerda\n", i2);
        else {
            printf("Diagonal inválida!\n");
            break;
        }
    }

    // MOVIMENTO DO CAVALO //
    printf("\nMovimento do cavalo\n");
    printf("Quantos movimentos deseja fazer? ");
    scanf("%d", &movimentosCavalo);

    moverCavalo(movimentosCavalo);

    printf("\nTodos os movimentos foram realizados.\n");

    return 0;
}