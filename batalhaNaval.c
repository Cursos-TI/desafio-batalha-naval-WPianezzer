#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio 1 - Vertical (coluna 0, linhas 0 a 3)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][0] = 3;
    }

    // Navio 2 - Horizontal (linha 9, colunas 5 a 8)
    for (int i = 5; i <= 8; i++) {
        tabuleiro[9][i] = 3;
    }

    // Navio 3 - Diagonal Principal (0,0 → 3,3)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 4 - Diagonal Secundária (0,9 → 3,6)
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibição do tabuleiro
    printf("\nTabuleiro 10x10 (0 = vazio, 3 = navio):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
