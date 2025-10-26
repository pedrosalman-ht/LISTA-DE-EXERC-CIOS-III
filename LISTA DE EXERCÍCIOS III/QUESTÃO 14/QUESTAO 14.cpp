#include <stdio.h>

int main() {
    int matriz[4][4], i, j, soma = 0;
  
    printf("Escreva os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 4; i++) {
        soma = soma + matriz[i][i];
    }

    printf("\nSoma dos valores da diagonal = %d", soma);

    return 0;
}
