#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci number: 0");
    }
    else if (n == 1) {
        printf("Fibonacci number: 1");
    }
    else {
        for (i = 2; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Fibonacci number: %d", b);
    }

    return 0;
}