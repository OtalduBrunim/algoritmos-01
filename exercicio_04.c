/*
 * PROGRAMA PARA IDENTIFICAR ANOS BISSEXTOS EM UM INTERVALO
 *
 * Objetivo:
 * - Identificar e exibir todos os anos bissextos dentro de um periodo
 * - Demonstrar o uso de funcoes auxiliares e estruturas de controle
 *
 * Funcionamento:
 * 1. A funcao ehBissexto() implementa as regras para anos bissextos:
 *    - Divisivel por 4 e nao por 100 OU
 *    - Divisivel por 400
 * 2. A funcao main():
 *    - Recebe o ano inicial e final do intervalo
 *    - Valida se o intervalo e valido (inicio < fim)
 *    - Percorre todos os anos no intervalo usando um loop for
 *    - Chama ehBissexto() para cada ano e exibe se for bissexto
 *
 * Estruturas:
 * - Funcao auxiliar ehBissexto() para encapsular a logica de verificacao
 * - Loop for para iteracao pelo intervalo de anos
 * - Condicional if para validacao do intervalo
 *
 * Regras de ano bissexto:
 * - Implementa as regras do calendario Gregoriano
 * - Trata corretamente excecoes (anos seculares)
 *
 * Bibliotecas:
 * - stdio.h para funcoes de entrada/saida
 */
#include <stdio.h>

int ehBissexto(int ano) {
    /* Um ano é bissexto se:
     1. For divisível por 4 E não divisível por 100 OU
     2. For divisível por 400 */
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main() {
    int ano_inicio, ano_final;
    
    printf("Digite o ano de inicio (menor valor): ");
    scanf("%d", &ano_inicio);
    
    printf("Digite o ano de fim (maior valor): ");
    scanf("%d", &ano_final);
    
    if (ano_inicio >= ano_final) {
        printf("Erro: O ano de inicio deve ser menor que o ano de fim.\n");
        return 1;
    }
    
    printf("Anos bissextos entre %d e %d:\n", ano_inicio, ano_final);
    
    for (int ano = ano_inicio; ano <= ano_final; ano++) {
        if (ehBissexto(ano)) {
            printf("%d\n", ano);
        }
    }
    
    return 0;
}