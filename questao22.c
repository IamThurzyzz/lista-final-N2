#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia, mes, ano;
    printf("Digite o dia do aniversario:\n");
    scanf("%d", &dia);
    printf("Digite o mes do aniversario:\n");
    scanf("%d", &mes);
    printf("Digite o ano do aniversario:\n");
    scanf("%d", &ano);

    if (ano < 1900 || ano > 3000) {
        printf("Ano invalido.\n");
        return 0;
    }
    if (mes < 1 || mes > 12) {
        printf("Mes invalido.\n");
        return 0;
    }
    if (dia < 1 || dia > 31) {
        printf("Dia invalido.\n");
        return 0;
    }
    printf("Data valida.\n");

    return 0;
}
