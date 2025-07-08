#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, x;
    int encontrado = 0; 
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nDigite o valor a ser buscado (X): ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                printf("Valor %d encontrado na linha %d, coluna %d\n", x, i, j);
                encontrado = 1;
                break; 
            }
        }
        if (encontrado) break;
    }

    if (!encontrado) {
        printf("Valor %d não encontrado na matriz.\n", x);
    }

    return 0;
}
