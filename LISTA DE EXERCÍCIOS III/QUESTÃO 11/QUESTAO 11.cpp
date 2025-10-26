#include <stdio.h>

int main() {
    int num[10], i, j, cont;
    
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) 
	{scanf("%d", &num[i]);}

    printf("Quantidade de vezes que cada numero aparece:\n");

    for (i = 0; i < 10; i++)
	
	{cont = 0;
        for (j = 0; j < i; j++) 
		{if (num[j] == num[i]) {
                cont = 1;  
                break;
            }
        }
      if (cont == 0) { 
            cont = 1;
           
            for (j = i + 1; j < 10; j++) {
                if (num[j] == num[i]) {
                    cont++;
                }
            }

            printf("%d apareceu %d vezes \n", num[i], cont);
        }
    }

    return 0;
}
