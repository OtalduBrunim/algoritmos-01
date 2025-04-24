/*
 * PROGRAMA PARA LER E EXIBIR UM VALOR REAL
 *
 * Objetivo:
 * - Demonstrar como receber um valor real (float) como entrada
 * - Mostrar o valor formatado na saida
 *
 * Funcionamento:
 * 1. Declara uma variavel do tipo float para armazenar o valor
 * 2. Usa printf() para solicitar a entrada do usuario
 * 3. Usa scanf() com o formatador %f para ler o valor real
 * 4. Exibe o valor digitado com printf() usando %.2f para mostrar
 *    duas casas decimais
 *
 * Caracteristicas:
 * - Usa tipo float para numeros reais (ponto flutuante)
 * - Formato %.2f na saida para melhor legibilidade
 * - Nao faz validacoes de entrada (aceita qualquer valor numerico)
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida padrao
 */
#include <stdio.h>

int main() {
    float valor_real;


    printf("Digite um valor real: ");
    scanf("%f", &valor_real);


    printf("O valor real digitado foi: %.2f\n", valor_real);

    return 0;
}