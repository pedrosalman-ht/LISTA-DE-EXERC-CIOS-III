#include <stdio.h>

int main() {
int quan, i;
int somaP = 0, somaI = 0;

    	printf("Quantidade de numeros: ");
    		scanf("%d", &quan);

    int numeros[quan];  

    	printf("\nDigite os %d numeros:\n", quan);
    for (i = 0; i < quan; i++) 
	{
		printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < quan; i++) 
	{
        if (numeros[i] % 2 == 0) 
		{somaP += numeros[i];} 
		
		else 
		{somaI += numeros[i];}
    }

    printf("\nSoma dos numeros pares: %d", somaP);
    printf("\nSoma dos numeros impares: %d\n", somaI);

    return 0;
}
