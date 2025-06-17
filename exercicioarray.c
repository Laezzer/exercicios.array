#include <stdio.h>

int main() {
    int numeros[6]; 
    int soma = 0; 
    
    for (int i = 0; i < 6; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 6; i++) 
        soma += numeros[i];
    
    printf("A soma dos números é: %d\n", soma);

    return 0;
}