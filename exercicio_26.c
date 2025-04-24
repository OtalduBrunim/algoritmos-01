#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    if (soma >= 10) {
        printf("A soma (%d) eh MAIOR OU IGUAL a 10.\n", soma);
    } else {
        printf("A soma (%d) eh MENOR que 10.\n", soma);
    }
    
    return 0;
}