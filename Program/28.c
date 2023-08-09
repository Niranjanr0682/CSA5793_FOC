// Cos series [cos(x) = 1 – x2/2! + x4/4! – x6/6! . . . . . . ]

#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 1.0;
    int n, sign = -1;
    
    // Input the value of x and the number of terms (n)
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    // Calculate the cosine series
    for (int i = 1; i <= n; i++) {
        term = pow(x, 2 * i) / factorial(2 * i);
        sum += sign * term;
        sign *= -1; // Toggle the sign for each term
    }
    
    // Display the calculated cosine series value
    printf("Cosine of %.2lf radians using %d terms is: %.6lf\n", x, n, sum);
    
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
