#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_hora, salario_bruto, salario_liquido;
    int num_aulas;
    float desconto_inss;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &valor_hora);
    printf("Digite o número de aulas dadas: ");
    scanf("%d", &num_aulas);
    printf("Digite a porcentagem de desconto do INSS: ");
    scanf("%f", &desconto_inss);

    salario_bruto = valor_hora * num_aulas;
    salario_liquido = salario_bruto * (1 - desconto_inss / 100);

    printf("Salário líquido: %.2f\n", salario_liquido);

    return 0;
}
