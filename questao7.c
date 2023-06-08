#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int i;

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("As 4 primeiras letras do nome: ");
    for (i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
