#include <stdio.h>

int main() {
    int matriz[4][4];

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = i * j;
        }
    }

    printf("Matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
