#include <stdio.h>

int main() {
    int numeros[6];
    int soma = 0;
    float media;

    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / 6.0;
    
    printf("A média dos números inseridos é: %.2f\n", media);

    return 0;
}
