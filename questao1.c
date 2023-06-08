#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float raio, diametro, comprimento, area;

    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    comprimento = 2*3.14*raio;
    area = 3.14 *raio*raio;

    printf("Diâmetro: %.2f\n", diametro);
    printf("Comprimento: %.2f\n", comprimento);
    printf("Área: %.2f\n", area);

    return 0;
}
