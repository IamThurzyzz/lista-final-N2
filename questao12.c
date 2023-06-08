#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    char operacao;
    float resultado;

    printf("Digite a expressão no formato: número1 operação número2\n");
    scanf("%f %c %f", &num1, &operacao, &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operação inválida!\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
