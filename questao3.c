#include <stdio.h>
#include <stdlib.h>

int main() {
    float metros;
    int decimetros, centimetros, milimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("Decímetros: %d\n", decimetros);
    printf("Centímetros: %d\n", centimetros);
    printf("Milímetros: %d\n", milimetros);

    return 0;
}
