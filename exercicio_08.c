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

    printf("Digite seu genero (M/F/O): ");
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