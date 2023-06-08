#include <stdio.h>
#include <stdlib.h>

int main() {
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(num));
    } else {
        printf("Número ao quadrado: %.2f\n", pow(num, 2));
    }

    return 0;
}
