#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[50], unicos[50];    
    int i, j;          
    int repetido, contU = 0; 

    srand(time(NULL));  
 
    for (i = 0; i < 50; i++) {
        numeros[i] = rand() % 11;
    }
    printf("50 numeros aleatorios:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\nNumeros unicos:  ");

    
    for (i = 0; i < 50; i++) {
        repetido = 0;
        for (j = 0; j < contU; j++) {
            if (numeros[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0) {
            unicos[contU] = numeros[i];
            contU++;
        }
    } 
    for (i = 0; i < contU; i++) {
        printf("%d ", unicos[i]);
    }
    printf("\n");
    return 0;
}
