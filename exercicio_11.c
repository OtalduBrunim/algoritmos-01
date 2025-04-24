/*
 * PROGRAMA DE DIVISAO INTEIRA OBRIGATORIA
 *
 * Objetivo:
 * - Receber dois numeros inteiros
 * - Realizar uma divisao que resulte em um numero inteiro
 * - Tratar divisao por zero
 *
 * Funcionamento:
 * 1. Declara as variaveis num1, num2 e resultado como int
 * 2. Solicita e le os dois numeros usando scanf()
 * 3. Verifica se num2 eh zero para evitar erro
 * 4. Se valido, realiza a divisao inteira (/) e armazena em resultado
 * 5. Exibe o resultado ou mensagem de erro
 *
 * Observacoes:
 * - Usa divisao inteira (/) que trunca a parte decimal
 * - Nao arredonda, apenas descarta as casas decimais
 * - Exemplo: 5 / 2 = 2 (nao 2.5)
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 */
#include <stdio.h>

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro (diferente de zero): ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: Divisao por zero nao permitida.\n");
    } else {
        resultado = num1 / num2;  // Divisão inteira
        printf("Resultado da divisao inteira: %d\n", resultado);
    }

    return 0;
}