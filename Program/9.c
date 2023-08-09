#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    // Print the sum of the series
    printf("Sum of the series 1^2 + 2^2 + 3^2 + 4^2 + ... + %d^2 = %d\n", n, sum);

    return 0;
}
