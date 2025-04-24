/*
 * PROGRAMA PARA CALCULAR RESISTENCIA EQUIVALENTE EM PARALELO
 *
 * Objetivo:
 * - Calcular a resistencia equivalente de dois resistores em paralelo
 * - Aplicar a formula padrao para resistores em paralelo
 * - Exibir o resultado com precisao de duas casas decimais
 *
 * Funcionamento:
 * 1. Declara variaveis float para armazenar os valores dos resistores
 * 2. Solicita ao usuario os valores de R1 e R2 em ohms
 * 3. Calcula a resistencia equivalente usando a formula:
 *    Req = (R1 * R2) / (R1 + R2)
 * 4. Exibe o resultado formatado com duas casas decimais
 *
 * Observacoes:
 * - A formula funciona apenas para dois resistores em paralelo
 * - Para mais resistores, a formula seria 1/Req = 1/R1 + 1/R2 + ...
 * - Nao inclui validacao para valores zero ou negativos
 * - Unidade de medida padrao: ohms (Ω)
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
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
