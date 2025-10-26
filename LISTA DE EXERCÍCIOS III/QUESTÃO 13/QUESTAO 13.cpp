#include <stdio.h>

int main() {
    int matriz[3][3], i, j, soma, maiorsoma, limaior;

    
    printf("Digite os valores da matriz 3x3 (9 NUMEROS):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
  
    maiorsoma = 0;
    for (j = 0; j < 3; j++) {
        maiorsoma += matriz[0][j];
    }
    limaior = 0;

    for (i = 1; i < 3; i++) {
        soma = 0;
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
        if (soma > maiorsoma) {
            maiorsoma = soma;
            limaior = i;
        }
    }

    printf("\nA linha com maior soma e a linha %d, que deu %d.\n", limaior, maiorsoma);

    return 0;
}
