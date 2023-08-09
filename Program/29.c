// Exponential series [e-1 = 1 – x/1! + x2/2! – x3/3! + x4/4! . . . . . . ]

#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 1.0;
    int n;
    
    // Input the value of x and the number of terms (n)
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    // Calculate the exponential series
    for (int i = 1; i <= n; i++) {
        term = pow(x, i) / factorial(i);
        sum += term;
    }
    
    // Display the calculated exponential series value
    printf("e^%.2lf using %d terms is: %.6lf\n", x, n, sum);
    
    return 0;
}

// Function to calculate factorial of a number
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
