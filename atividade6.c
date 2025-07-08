#include <stdio.h>

int main() {
    int matriz1[4][4], matriz2[4][4], matrizMaior[4][4];
    int i, j;

    printf("Digite os elementos da primeira matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Matriz1[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nDigite os elementos da segunda matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Matriz2[%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matrizMaior[i][j] = matriz1[i][j];
            } else {
                matrizMaior[i][j] = matriz2[i][j];
            }
        }
    }

    printf("\nMatriz com os maiores valores de cada posição:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", matrizMaior[i][j]);
        }
        printf("\n");
    }

    return 0;
}
