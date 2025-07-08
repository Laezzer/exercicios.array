#include <stdio.h>

int main() {
    int matriz[3][3], transposta[3][3];
    int i, j;

    // Lendo a matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a transposta
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Imprimindo a matriz transposta
    printf("\nMatriz transposta:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
