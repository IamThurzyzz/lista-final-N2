#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("Digite 3 números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("Os números em ordem crescente são: %d %d %d", a, b, c);
    return 0;
}
