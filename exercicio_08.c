/*
 * PROGRAMA PARA COLETAR DADOS PESSOAIS
 *
 * Objetivo:
 * - Coletar e exibir informacoes do usuario:
 *   - Nome (string)
 *   - Idade (inteiro)
 *   - Genero (caractere: M/F)
 *   - Altura (float)
 *
 * Funcionamento:
 * 1. Declara variaveis para armazenar os dados
 * 2. Solicita e le cada dado usando scanf()
 * 3. Exibe os dados formatados
 *
 * Observacoes:
 * - Usa %49s para evitar overflow no nome
 * - Espaço antes de %c para limpar buffer
 * - Altura exibida com 2 casas decimais
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 */
#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    char genero;
    float altura;

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu genero (M/F): ");
    scanf(" %c", &genero);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("\nDados coletados:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Genero: %c\n", genero);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}