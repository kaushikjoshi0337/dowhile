#include <stdio.h>

int main() {
    int n, i;
    int fib[100]; 

    printf("Enter any number: ");
    scanf("%d", &n);
    fib[0] = 0;
    fib[1] = 1;

    printf("Output:\n");
    printf("%d, %d, ", fib[0], fib[1]);
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d", fib[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }

}
