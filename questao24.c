#include <stdio.h>
#include <stdlib.h>

int main() {
    char tipo;
    float km, consumo;

    printf("Informe o tipo de carro (A, B ou C): ");
    scanf("%c", &tipo);

    printf("Informe a distância percorrida em km: ");
    scanf("%f", &km);

    switch(tipo) {
        case 'A':
            consumo = km / 8;
            break;
        case 'B':
            consumo = km / 9;
            break;
        case 'C':
            consumo = km / 12;
            break;
        default:
            printf("Tipo de carro inválido!\n");
            return 0;
    }

    printf("O consumo estimado é: %.2f litros\n", consumo);

    return 0;
}
