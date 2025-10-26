#include <stdio.h>  

int main() {
    char palavra[100];   
    int i = 0;            
    int vogais = 0, consoantes = 0;   

    printf("Escreva uma palavra: ");
    scanf("%s", palavra);  

    while (palavra[i] != '\0') {

        if (palavra[i] == 'A' || palavra[i] == 'a' ||
            palavra[i] == 'E' || palavra[i] == 'e' ||
            palavra[i] == 'I' || palavra[i] == 'i' ||
            palavra[i] == 'O' || palavra[i] == 'o' ||
            palavra[i] == 'U' || palavra[i] == 'u') {

            vogais++; 
        } else {
            consoantes++; 
        }
        i++; 
    }

    printf("\nQuantidade de vogais: %d", vogais);
    printf("\nQuantidade de consoantes: %d\n", consoantes);

    return 0; 
}
