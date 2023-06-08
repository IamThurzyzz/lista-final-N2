#include <stdio.h>
#include <stdlib.h>

int main(){
    float preço, novo_preco;

    printf("Digite o preço do produto: ");
    scanf("%f", &preço);

    novo_preco = preço*0.91;

    printf("Novo preço com desconto de 9%%: %.2f\n", novo_preco);

    return 0;
}
