#include <stdio.h>

int main() {
    int num1, num2, resto;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro (diferente de zero): ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: Divisao por zero nao permitida.\n");
    } else {
        resto = num1 % num2;  // Calcula o resto da divisão
        printf("Resto da divisao: %d\n", resto);

        if (resto % 2 != 0) {
            printf("O resto %d eh IMPAR.\n", resto);
        } else {
            printf("O resto %d eh PAR.\n", resto);
        }
    }

    return 0;
}