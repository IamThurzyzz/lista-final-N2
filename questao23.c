#include <stdio.h>
#include <stdlib.h>

int main() {
    int mes;
    printf("Digite o numero do mes:\n");
    scanf("%d", &mes);

    switch (mes) {
        case 2:
            printf("O mes %d tem 28 dias.\n", mes);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mes %d tem 30 dias.\n", mes);
            break;
        default:
            printf("O mes %d tem 31 dias.\n", mes);
            break;
    }

    return 0;
}
