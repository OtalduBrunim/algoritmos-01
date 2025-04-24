#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int idade;
    char sexo, nacionalidade[50], deficiencia[4];
    
    printf("ALISTAMENTO MILITAR OBRIGATORIO - VERIFICACAO DE APTIDAO\n\n");
    
    // Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);  // Converte para maiúscula
    
    printf("Digite sua nacionalidade: ");
    scanf("%s", nacionalidade);
    
    printf("Possui alguma deficiencia grave? (Sim/Nao): ");
    scanf("%s", deficiencia);
    for(int i = 0; deficiencia[i]; i++) {
        deficiencia[i] = toupper(deficiencia[i]);  // Converte para maiúsculas
    }
    
    // Verificação das condições
    if (idade >= 18 && idade <= 45 && 
        sexo == 'M' && 
        strcmp(nacionalidade, "brasileiro") == 0 && 
        strcmp(deficiencia, "NAO") == 0) {
        printf("\nSTATUS: APTO para o alistamento militar obrigatorio.\n");
    } else {
        printf("\nSTATUS: NAO APTO para o alistamento militar obrigatorio.\n");
    }
    
    return 0;
}