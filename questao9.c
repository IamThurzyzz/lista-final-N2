#include <stdio.h>
#include <stdlib.h>

int main() {
    float tempo, velocidade, distancia;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;

    printf("Distância percorrida: %.2f\n", distancia);

    return 0;
}
