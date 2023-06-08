#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Números pares de 1 a 100:\n");

    for (i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
