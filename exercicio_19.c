#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    int resultado;

    printf("Digite o primeiro numero real: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero real: ");
    scanf("%lf", &num2);

    resultado = (int)round(num1 * num2);

    printf("O resultado inteiro da multiplicacao: %d\n", resultado);

    return 0;
}