#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_compra, valor_venda;

    printf("Digite o valor de compra do produto: ");
    scanf("%f", &valor_compra);

    if (valor_compra < 20) {
        valor_venda = valor_compra * 1.45;
    } else {
        valor_venda = valor_compra * 1.30;
    }

    printf("Valor de venda: %.2f\n", valor_venda);

    return 0;
}
