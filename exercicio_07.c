#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro par de numeros inteiros:\n");
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    
    int sum1 = num1 + num2;
    printf("Soma do primeiro par: %d\n", sum1);

    int num3, num4;
    printf("\nDigite o segundo par de numeros inteiros:\n");
    printf("Primeiro numero: ");
    scanf("%d", &num3);
    printf("Segundo numero: ");
    scanf("%d", &num4);
    
    int sum2 = num3 + num4;
    printf("Soma do segundo par: %d\n", sum2);

    if (sum2 == 0) {
        printf("\nErro: Nao e possivel dividir por zero.\n");
    } else {
        float result = (float)sum1 / sum2;
        printf("\nResultado da divisao (%d / %d): %.2f\n", sum1, sum2, result);
    }

    return 0;
}