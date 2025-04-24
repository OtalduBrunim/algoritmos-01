/*
 * PROGRAMA PARA VERIFICAR SE UM NUMERO EH PAR OU IMPAR
 *
 * Objetivo:
 * - Receber um numero inteiro
 * - Verificar se eh par ou impar
 * - Exibir o resultado
 *
 * Funcionamento:
 * 1. Declara a variavel 'numero' do tipo int
 * 2. Solicita e le o numero usando scanf()
 * 3. Verifica se o resto da divisao por 2 eh zero:
 *    - Se sim: numero eh par
 *    - Se nao: numero eh impar
 * 4. Exibe o resultado correspondente
 *
 * Logica:
 * - Usa o operador % (modulo) para calcular o resto da divisao
 * - Numeros pares tem resto zero quando divididos por 2
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh um numero par.\n", numero);
    } else {
        printf("%d eh um numero impar.\n", numero);
    }

    return 0;
}