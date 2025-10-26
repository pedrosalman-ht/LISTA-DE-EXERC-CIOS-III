#include <stdio.h>

int main() {
    int numero, contador = 0; 

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero preecisa ser positivo, digite novamente\n");
        return 0;
    }
    
    while (numero != 0) {
        numero = numero / 10; 
        contador++;           
    }

    printf("O numero possui %d digitos.\n", contador);

    return 0;
}
