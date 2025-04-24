#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma;
    float media;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    media = soma / 3.0;

    printf("\nSoma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}