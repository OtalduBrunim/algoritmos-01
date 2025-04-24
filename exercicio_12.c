#include <stdio.h>
#include <string.h> // for strlen()

#define max_letras 10

int main() {
    char text[max_letras + 1]; // +1 for the null terminator

    printf("Digite um texto (maximo de %d letras): ", max_letras);
    scanf("%10s", text);

    printf("Voce digitou: %s\n", text);
    printf("Numero de letras digitadas: %zu\n", strlen(text));

    return 0;
}