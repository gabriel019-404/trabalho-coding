#include <stdio.h>

int main(void) {
    int quantidade, i;
    double nota, soma = 0.0, media;

    printf("Digite a quantidade de notas: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    for (i = 1; i <= quantidade; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }

    media = soma / quantidade;
    printf("Media final: %.2f\n", media);

    return 0;
}
