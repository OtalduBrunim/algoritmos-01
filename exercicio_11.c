#include <stdio.h>

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro (diferente de zero): ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: Divisao por zero nao permitida.\n");
    } else {
        resultado = num1 / num2;  // Divisão inteira
        printf("Resultado da divisao inteira: %d\n", resultado);
    }

    return 0;
}