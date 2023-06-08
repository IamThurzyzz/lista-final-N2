#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Digite um número decimal: ");
    scanf("%d", &num);

    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
