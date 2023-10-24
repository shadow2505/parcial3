#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Numero de terminos de la serie Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El numero de terminos debe ser no negativo.\n");
        return 1;
    }

    unsigned long long a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%llu ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

