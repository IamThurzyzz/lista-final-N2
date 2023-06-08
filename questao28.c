#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade, i;
    float peso, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

    for (i = 0; i < 15; i++) {
        printf("Informe a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        printf("Informe o peso da pessoa %d: ", i + 1);
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) {
            soma1 += peso;
            cont1++;
        } else if (idade >= 11 && idade <= 20) {
            soma2 += peso;
            cont2++;
        } else if (idade >= 21 && idade <= 30) {
            soma3 += peso;
            cont3++;
        } else if (idade > 30) {
            soma4 += peso;
            cont4++;
        }
    }

    printf("Média de peso das pessoas de 1 a 10 anos: %.2f\n", soma1 / cont1);
    printf("Média de peso das pessoas de 11 a 20 anos: %.2f\n", soma2 / cont2);
    printf("Média de peso das pessoas de 21 a 30 anos: %.2f\n", soma3 / cont3);
    printf("Média de peso das pessoas maiores de 30 anos: %.2f\n", soma4 / cont4);

    printf("Quantidade de pessoas de 1 a 10 anos: %d\n", cont1);
    printf("Quantidade de pessoas de 11 a 20 anos: %d\n", cont2);
    printf("Quantidade de pessoas de 21 a 30 anos: %d\n", cont3);
    printf("Quantidade de pessoas maiores de 30 anos: %d\n", cont4);

    return 0;
}
