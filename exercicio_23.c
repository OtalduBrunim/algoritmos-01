#include <stdio.h>
#include <stdlib.h>

#define MAX 100

long long memo[MAX];

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    if (memo[n] != -1) {
        return memo[n];
    }
    
    memo[n] = fibonacci(n-1) + fibonacci(n-2);
    return memo[n];
}

int main() {
    int n;
    
    for (int i = 0; i < MAX; i++) {
        memo[i] = -1;
    }
    
    printf("Digite o valor de n para Fibonacci: ");
    scanf("%d", &n);
    
    if (n < 0 || n >= MAX) {
        printf("Valor invalido! Deve ser entre 0 e %d\n", MAX-1);
        return 1;
    }
    
    printf("Fibonacci(%d) = %lld\n", n, fibonacci(n));
    
    return 0;
}