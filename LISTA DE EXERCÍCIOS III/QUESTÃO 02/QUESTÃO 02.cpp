	#include <stdio.h>  

	int main() {
    	int num1, num2, i;  

   
    	printf("Escreva o primeiro numero:");
    		scanf("%d", &num1);

    	printf("Escreva o segundo numero:");
   			 scanf("%d", &num2);

    	if (num1 > num2) 
	{
        	int temp = num1;  
       	 	num1 = num2;
        	num2 = temp;
    }

    printf("Numeros inteiros entre %d e %d:\n", num1, num2);

    for (i = num1 + 1; i < num2; i++) 
	{
        printf("%d ", i);
    }
    return 0;
	}

	
	
	
	
	
	
	
	
	
	
	
	

