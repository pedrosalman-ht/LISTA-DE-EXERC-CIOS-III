#include <stdio.h>

int main() {
    int v1[5], v2[5], i, resultado = 0;  
    
    printf("Digite 5 valores para o primeiro vetor:\n");
    	for (i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 valores para o segundo vetor:\n");
    	for (i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < 5; i++) {
        resultado = resultado + (v1[i] * v2[i]);
    }

    printf("\nProduto escalar = %d\n", resultado);

    return 0;
}
