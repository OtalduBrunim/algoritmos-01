/*
 * PROGRAMA PARA VERIFICAR SOMA DE DOIS NUMEROS
 *
 * Objetivo:
 * - Receber dois numeros inteiros como entrada
 * - Calcular a soma desses numeros
 * - Verificar se o resultado eh maior ou igual a 10
 * - Exibir mensagem informando o resultado
 *
 * Funcionamento:
 * 1. Declara tres variaveis do tipo int:
 *    - num1 e num2 para armazenar os numeros de entrada
 *    - soma para armazenar o resultado da adicao
 * 2. Solicita e armazena os dois numeros usando scanf()
 * 3. Calcula a soma dos numeros
 * 4. Usa estrutura condicional if-else para verificar:
 *    - Se soma >= 10, exibe mensagem correspondente
 *    - Caso contrario, exibe que eh menor que 10
 * 5. Retorna 0 indicando execucao bem-sucedida
 *
 * Observacoes:
 * - Trabalha apenas com numeros inteiros
 * - Nao faz validacao para entrada nao numerica
 * - Exibe o valor da soma junto com a mensagem
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    if (soma >= 10) {
        printf("A soma (%d) eh MAIOR OU IGUAL a 10.\n", soma);
    } else {
        printf("A soma (%d) eh MENOR que 10.\n", soma);
    }
    
    return 0;
}