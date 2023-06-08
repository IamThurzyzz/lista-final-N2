#include <stdio.h>
#include <stdlib.h>

int main() {
    int lado, i, j;

    printf("Informe o tamanho do lado do quadrado (entre 1 e 20): ");
    scanf("%d", &lado);

    if (lado < 1 || lado > 20) {
        printf("Tamanho inválido!\n");
        return 0;
    }

    for (i = 0; i < lado; i++) {
        for (j = 0; j < lado; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
