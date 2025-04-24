/*
 * PROGRAMA PARA OPERACOES MATEMATICAS COM DOIS PARES DE NUMEROS
 * 
 * Objetivo:
 * - Receber dois pares de numeros inteiros
 * - Calcular a soma de cada par
 * - Dividir a primeira soma pela segunda soma
 * - Exibir os resultados
 * 
 * Fluxo:
 * 1. Entrada do primeiro par (num1, num2)
 * 2. Calculo e exibiçao da primeira soma (sum1 = num1 + num2)
 * 3. Entrada do segundo par (num3, num4)
 * 4. Calculo e exibição da segunda soma (sum2 = num3 + num4)
 * 5. Verificacao de divisão por zero:
 *    - Se sum2 != 0: calcula e exibe divisão (sum1/sum2)
 *    - Se sum2 == 0: exibe mensagem de erro
 * 
 * Tratamento:
 * - Conversao para float na divisão para precisao decimal
 * - Controle de erro para divisao por zero
 * 
 * Bibliotecas:
 * - stdio.h: para funcoes de entrada/saida
 */
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro par de numeros inteiros:\n");
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    
    int sum1 = num1 + num2;
    printf("Soma do primeiro par: %d\n", sum1);

    int num3, num4;
    printf("\nDigite o segundo par de numeros inteiros:\n");
    printf("Primeiro numero: ");
    scanf("%d", &num3);
    printf("Segundo numero: ");
    scanf("%d", &num4);
    
    int sum2 = num3 + num4;
    printf("Soma do segundo par: %d\n", sum2);

    if (sum2 == 0) {
        printf("\nErro: Nao e possivel dividir por zero.\n");
    } else {
        float result = (float)sum1 / sum2;
        printf("\nResultado da divisao (%d / %d): %.2f\n", sum1, sum2, result);
    }

    return 0;
}