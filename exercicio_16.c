/*
 * PROGRAMA PARA CALCULAR VOLUME A PARTIR DE DIMENSOES
 *
 * Objetivo:
 * - Calcular o volume de um objeto com base em tres dimensoes lineares
 * - Todas as entradas e saidas sao em metros (unidade SI)
 *
 * Funcionamento:
 * 1. Declara tres variaveis float para as dimensoes
 * 2. Declara uma variavel float para o resultado
 * 3. Usa scanf() para ler comprimento, largura e altura
 * 4. Calcula volume = comprimento * largura * altura
 * 5. Exibe o resultado em metros cubicos (m³) com 2 decimais
 *
 * Caracteristicas:
 * - Usa float para precisao em medidas metricas
 * - Unidade claramente indicada na entrada/saida
 * - Formato %.2f para limitar a 2 casas decimais
 *
 * Aplicacao:
 * - Calculo de volumes para construcao, logistica, etc.
 *
 * Bibliotecas:
 * - stdio.h para operacoes de I/O
 */
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