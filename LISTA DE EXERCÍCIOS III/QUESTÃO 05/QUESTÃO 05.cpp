#include <stdio.h>

int main() {
	int numero, invert = 0, resto;
	
	printf("Digite um numero para ser invertido:  ");
		scanf("%d",&numero);
	
	while (numero != 0) {
        resto = numero % 10;           
    	invert = invert * 10 + resto; 
        numero = numero / 10;
						}	
	printf("O numero invertido e:%d", invert);
	
	return 0;
}