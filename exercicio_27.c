#include <stdio.h>

int main() {
    float valor_float;
    int valor_inteiro;

    printf("Digite um valor float: ");
    scanf("%f", &valor_float);

    valor_inteiro = (int)valor_float;

    printf("Valor inteiro: %d\n", valor_inteiro);

    return 0;
}