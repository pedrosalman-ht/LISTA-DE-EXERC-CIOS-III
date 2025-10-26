#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, j;
    int flag = 1; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    j = strlen(palavra) - 1; 

    
    for (i = 0; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            flag = 0; 
            break;
        }
    }

    if (flag == 1) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra NAO e um palindromo.\n");
    }

    return 0;
}
