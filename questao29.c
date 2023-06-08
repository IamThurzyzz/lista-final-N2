#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    float nota, media, soma = 0, somaTurma = 0;
    int peso[4] = {3, 2, 1, 1};

    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        soma = 0;
        for (j = 0; j < 4; j++) {
            printf("Informe a nota %d: ", j + 1);
            scanf("%f", &nota);
            soma += nota * peso[j];
        }
        media = soma / 7;
        printf("Média: %.2f\n", media);
        if (media >= 7) {
            printf("Aprovado!\n");
        } else if (media >= 4) {
            printf("Recuperação! Precisa de %.2f pontos para ser aprovado.\n", 7 - media);
        } else {
            printf("Reprovado!\n");
        }
        somaTurma += media;
    }

    printf("Média da turma: %.2f\n", somaTurma / 5);

    return 0;
}
