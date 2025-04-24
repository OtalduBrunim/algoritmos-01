/*
 * PROGRAMA PARA VERIFICAR SE O RESTO DA DIVISAO EH IMPAR
 *
 * Objetivo:
 * - Receber dois numeros inteiros e realizar uma divisao
 * - Verificar se o resto da divisao eh impar
 * - Exibir o resultado na tela
 *
 * Funcionamento:
 * 1. Declara as variaveis num1, num2 e resto como inteiros
 * 2. Solicita e le os dois numeros usando scanf()
 * 3. Verifica se o divisor (num2) eh zero para evitar erro
 * 4. Se valido, calcula o resto usando o operador % (modulo)
 * 5. Verifica se o resto eh impar (resto % 2 != 0)
 * 6. Exibe se o resto eh par ou impar
 *
 * Observacoes:
 * - O operador % retorna o resto da divisao inteira
 * - Um numero eh impar se o resto da divisao por 2 for diferente de zero
 * - Tratamento de divisao por zero incluso
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

int main() {
    int num1, num2, resto;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro (diferente de zero): ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Erro: Divisao por zero nao permitida.\n");
    } else {
        resto = num1 % num2;  // Calcula o resto da divisão
        printf("Resto da divisao: %d\n", resto);

        if (resto % 2 != 0) {
            printf("O resto %d eh IMPAR.\n", resto);
        } else {
            printf("O resto %d eh PAR.\n", resto);
        }
    }

    return 0;
}