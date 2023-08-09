// Sine series [sin(x) = x - x3/3! + x5/5! - x7/7! . . . . . . ]

#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0.0;
    int n, sign = 1;
    
    // Input the value of x and the number of terms (n)
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    // Calculate the sine series
    for (int i = 1; i <= n; i++) {
        term = pow(x, 2 * i - 1) / factorial(2 * i - 1);
        sum += sign * term;
        sign *= -1; // Toggle the sign for each term
    }
    
    // Display the calculated sine series value
    printf("Sine of %.2lf radians using %d terms is: %.6lf\n", x, n, sum);
    
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
