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