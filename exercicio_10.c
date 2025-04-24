/*
 * PROGRAMA DE MENU INTERATIVO
 *
 * Objetivo:
 * - Exibir um menu com 5 opcoes de cardapio
 * - Permitir que o usuario selecione uma opcao
 * - Confirmar a escolha ou indicar opcao invalida
 *
 * Funcionamento:
 * 1. Exibe o menu formatado com printf
 * 2. Le a escolha do usuario com scanf
 * 3. Usa switch-case para:
 *    - Validar a entrada (1-5)
 *    - Exibir mensagem correspondente a escolha
 *    - Tratar entradas invalidas (default)
 *
 * Estruturas:
 * - printf para exibicao do menu
 * - scanf para capturar entrada
 * - switch-case para controle de fluxo
 *
 * Bibliotecas:
 * - stdio.h para funcoes de I/O
 */
#include <stdio.h>

int main() {
    int escolha;

    printf("========== MENU ==========\n");
    printf("1. Pizza Margherita\n");
    printf("2. Hamburguer Artesanal\n");
    printf("3. Salada Caesar\n");
    printf("4. Sushi Variado\n");
    printf("5. Sorvete de Chocolate\n");
    printf("=========================\n");
    printf("Digite o numero da sua escolha (1-5): ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            printf("\nVoce escolheu Pizza Margherita!\n");
            break;
        case 2:
            printf("\nVoce escolheu Hamburguer Artesanal!\n");
            break;
        case 3:
            printf("\nVoce escolheu Salada Caesar!\n");
            break;
        case 4:
            printf("\nVoce escolheu Sushi Variado!\n");
            break;
        case 5:
            printf("\nVoce escolheu Sorvete de Chocolate!\n");
            break;
        default:
            printf("\nOpcao invalida! Digite um numero entre 1 e 5.\n");
    }

    return 0;
}