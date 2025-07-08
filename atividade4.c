#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maior, linhaMaior, colunaMaior;

    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Imprimindo a matriz
    printf("\nMatriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Localizado na linha %d e coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}
