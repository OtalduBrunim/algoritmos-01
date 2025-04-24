/*
 * PROGRAMA PARA MULTIPLICACAO COM RESULTADO INTEIRO
 *
 * Objetivo:
 * - Receber dois numeros reais como entrada
 * - Multiplica-los e garantir resultado inteiro
 * - Arredondar para o inteiro mais proximo
 *
 * Funcionamento:
 * 1. Declara variaveis double para os numeros de entrada
 * 2. Declara variavel int para o resultado
 * 3. Usa scanf() para ler os numeros reais
 * 4. Calcula o produto e arredonda usando round()
 * 5. Converte o resultado para int
 * 6. Exibe o resultado inteiro
 *
 * Observacoes:
 * - Usa a funcao round() da math.h para arredondamento correto
 * - Converte explicitamente para int apos arredondamento
 * - Trata tanto numeros positivos quanto negativos
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 * - math.h para funcoes matematicas
 */
#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    int resultado;

    printf("Digite o primeiro numero real: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero real: ");
    scanf("%lf", &num2);

    resultado = (int)round(num1 * num2);

    printf("O resultado inteiro da multiplicacao: %d\n", resultado);

    return 0;
}