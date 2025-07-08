#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, soma = 0;

    // Lendo a matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma da diagonal secundária
    for (i = 0; i < 3; i++) {
        j = 2 - i; // coluna correspondente à diagonal secundária
        soma += matriz[i][j];
    }

    // Imprimindo o resultado
    printf("\nSoma dos elementos da diagonal secundária: %d\n", soma);

    return 0;
}
