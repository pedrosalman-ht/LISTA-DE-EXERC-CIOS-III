#include <stdio.h>

int main() {
    int m[3][3], i, j;
    int somali, somaclu;
    int l1diag = 0, l2diag = 0;
    int referencia, valido = 1; 
  
    printf("Digite os numeros da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        l1diag += m[i][i];
    }
    
    for (i = 0; i < 3; i++) {
        l2diag += m[i][2 - i];
    }
   
    if (l1diag != l2diag) {
        valido = 0;
    }

    referencia = l1diag;
  
    for (i = 0; i < 3; i++) {
        somali = 0;
        for (j = 0; j < 3; j++) {
            somali += m[i][j];
        }
        if (somali != referencia) {
            valido = 0;
        }
    }

    for (j = 0; j < 3; j++) {
        somaclu = 0;
        for (i = 0; i < 3; i++) {
            somaclu += m[i][j];
        }
        if (somaclu != referencia) {
            valido = 0;
        }
    }

    if (valido == 1) {
        printf("\nA matriz e um quadrado magico.\n");
    } else {
        printf("\nA matriz nao e um quadrado magico.\n");
    }

    return 0;
}
