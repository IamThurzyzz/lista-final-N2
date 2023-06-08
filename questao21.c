#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    printf("Digite os lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) {
        printf("Triangulo equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }

    return 0;
}
