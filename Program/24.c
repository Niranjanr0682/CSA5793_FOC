// Swap 3 numbers a to b, b to c and c to a

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first value : ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;
    printf("After swapping:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    return 0;
}
