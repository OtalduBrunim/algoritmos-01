/*
 * PROGRAMA PARA CALCULAR IDADE EM MESES
 *
 * Objetivo:
 * - Calcular a idade do usuario em meses com base na data de nascimento
 * - Utilizar a data atual do sistema para o calculo
 *
 * Funcionamento:
 * 1. Solicita e armazena a data de nascimento (dia, mes, ano)
 * 2. Obtem a data atual do sistema usando time.h
 * 3. Calcula a diferenca em anos e converte para meses
 * 4. Ajusta subtraindo 1 mes se o aniversario ainda nao ocorreu no ano atual
 * 5. Exibe o resultado final
 *
 * Observacoes:
 * - Usa struct tm para obter dados de data/hora locais
 * - Ajusta valores de mes (comeca em 0) e ano (contagem desde 1900)
 * - Considera o dia do mes para precisao no calculo
 *
 * Bibliotecas:
 * - stdio.h para entrada/saida
 * - time.h para manipulacao de datas
 */
#include <stdio.h>
#include <time.h>

int main() {
    int dia_nasc, mes_nasc, ano_nasc;
    int dia_atual, mes_atual, ano_atual;
    int idade_meses;

    printf("Digite sua data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    dia_atual = tm.tm_mday;
    mes_atual = tm.tm_mon + 1;
    ano_atual = tm.tm_year + 1900;

    idade_meses = (ano_atual - ano_nasc) * 12 + (mes_atual - mes_nasc);

    if (mes_atual < mes_nasc || (mes_atual == mes_nasc && dia_atual < dia_nasc)) {
        idade_meses--;
    }

    printf("Sua idade em meses: %d\n", idade_meses);

    return 0;
}