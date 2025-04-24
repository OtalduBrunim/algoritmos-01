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