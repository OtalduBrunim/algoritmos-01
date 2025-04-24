#include <stdio.h>

void sortThreeChars(char *a, char *b, char *c) {
    char temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
}

int main() {
    char c1, c2, c3;

    printf("Digite 3 caracteres (separados por espaco): ");
    scanf(" %c %c %c", &c1, &c2, &c3);

    sortThreeChars(&c1, &c2, &c3);

    printf("Caracteres ordenados: %c %c %c\n", c1, c2, c3);

    return 0;
}