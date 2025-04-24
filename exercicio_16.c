#include <stdio.h>

int main() {
    float comprimento, largura, altura;
    float volume;

    printf("Digite o comprimento (m): ");
    scanf("%f", &comprimento);

    printf("Digite a largura (m): ");
    scanf("%f", &largura);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("\nVolume calculado: %.2f m³\n", volume);

    return 0;
}