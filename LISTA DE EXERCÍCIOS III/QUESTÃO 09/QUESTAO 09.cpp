#include <stdio.h>

int main() {
    int numeros[8];
    int i, j, cax;

    printf("Digite 8 numeros:\n");
    for (i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            if (numeros[i] < numeros[j]) {
                cax = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = cax;
            }
        }
    }

    printf("Numeros em ordem decrescente:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }

   return 0;
}
