#include <stdio.h>

int main() {
    float valor1, valor2;
    char char1, char2, char3, char4, char5; 

    valor1 = 3.14;
    valor2 = 2.71;
    char1 = 'A';
    char2 = 'B';
    char3 = 'C';
    char4 = 'D';
    char5 = 'E';

    printf("Valores reais:\n");
    printf("Valor 1: %.2f\n", valor1);
    printf("Valor 2: %.2f\n", valor2);

    printf("\nCaracteres:\n");
    printf("%c %c %c %c %c\n", char1, char2, char3, char4, char5);

    return 0;
}