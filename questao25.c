#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i = 0;
    float nota, soma = 0;

    printf("Quantos alunos tem na sala? ");
    scanf("%d", &n);

    while (i < n) {
        printf("Informe a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
        i++;
    }

    printf("A média aritmética da turma é: %.2f\n", soma / n);

    return 0;
}
