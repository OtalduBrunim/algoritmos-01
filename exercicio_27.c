/*
 * PROGRAMA PARA CONVERTER FLOAT PARA INTEIRO
 *
 * Objetivo:
 * - Receber um valor do tipo float como entrada
 * - Converter esse valor para inteiro (truncamento)
 * - Exibir o resultado da conversao
 *
 * Funcionamento:
 * 1. Declara uma variavel float para armazenar a entrada
 * 2. Declara uma variavel int para armazenar o resultado
 * 3. Usa scanf() para ler o valor float digitado
 * 4. Realiza a conversao explicita (type casting) para int
 *    - Remove a parte decimal (truncamento)
 *    - Exemplo: 3.75 vira 3
 * 5. Exibe o valor inteiro resultante
 *
 * Observacoes:
 * - Nao arredonda, apenas descarta as casas decimais
 * - Se o valor for negativo, o truncamento mantem o sinal
 *    - Exemplo: -2.9 vira -2
 * - Nao faz validacao para overflow em valores muito grandes
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

int main() {
    float valor_float;
    int valor_inteiro;

    printf("Digite um valor float: ");
    scanf("%f", &valor_float);

    valor_inteiro = (int)valor_float;

    printf("Valor inteiro: %d\n", valor_inteiro);

    return 0;
}