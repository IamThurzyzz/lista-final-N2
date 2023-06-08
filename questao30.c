#include <stdio.h>
#include <stdlib.h>

int main() {
    int lista[10], i, j, temp;

    for (i = 0; i < 10; i++) {
        printf("Informe o valor %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (lista[i] > lista[j]) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    printf("Lista em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", lista[i]);
    }

    return 0;
}
