#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;
    int cont = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') {
            cont++;
        }
    }

    printf("A palavra possui %d letra(s) A.\n", cont);

    return 0;
}
