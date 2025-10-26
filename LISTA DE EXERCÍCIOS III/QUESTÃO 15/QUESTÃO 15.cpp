#include <stdio.h>

int main() {
    int matriz[5][5], i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = 0;  
        }
    } 
    for (j = 0; j < 5; j++) {
        matriz[2][j] = 1;
    }
    for (i = 0; i < 5; i++) {
        matriz[i][2] = 1;
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
