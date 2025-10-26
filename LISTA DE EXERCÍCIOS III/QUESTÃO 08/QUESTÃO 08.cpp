#include <stdio.h>  

int main() {
    int numeros[10];     
    int i;               
    int maior1, menor1;    
    int maior2, menor2;  

    printf("Digite 10 numeros e voce sera informado a posicao do maior e do menor valor:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    } 
    maior1 = numeros[0];
    menor1 = numeros[0];
    maior2 = 0;
    menor2 = 0;

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior1) {
            maior1 = numeros[i];
            maior2 = i;
        }
        if (numeros[i] < menor1) {
            menor1 = numeros[i];
            menor2 = i;
        }
    }
    printf("\nMaior valor: %d (posicao %d)\n", maior1, maior2);
    printf("Menor valor: %d (posicao %d)\n", menor1, menor2);

    return 0;
}
