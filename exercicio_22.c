#include <stdio.h>

int main() {
    float r1, r2, req;

    // Entrada dos valores das resistências
    printf("Digite o valor do primeiro resistor (em ohms): ");
    scanf("%f", &r1);
    
    printf("Digite o valor do segundo resistor (em ohms): ");
    scanf("%f", &r2);

    // Cálculo da resistência equivalente em paralelo
    req = (r1 * r2) / (r1 + r2);

    // Saída do resultado
    printf("\nResistencia equivalente: %.2f ohms\n", req);

    return 0;
}
