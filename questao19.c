#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Classe eleitoral: Não-eleitor\n");
    } else if (idade >= 18 && idade <= 65) {
        printf("Classe eleitoral: Eleitor obrigatório\n");
    } else {
        printf("Classe eleitoral: Eleitor facultativo\n");
    }

    return 0;
}
