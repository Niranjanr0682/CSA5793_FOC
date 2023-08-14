// A company that issues check-cashing cards uses an algorithm to create card numbers. 
// The algorithm adds the digits of a four-digit number, and then adds a fifth digit of 0 or 1 to make the sum of the digits even. 
// The last digit in the number is called the check digit. Complete the seven problem-solving steps to develop a solution that 
// accepts a four-digit number into one variable, adds the check digit, and prints the original number and the new number. 
// Test the following data: Original (47371) and 4631 (46310).

// Hint: You may use any or all of these functions and the principle of concatenation of strings.
// Integer(X)—Integer function String(X)—Numeric to string Value(A)—String to numeric

// Note: The Integer(X) gives the whole number value of the real number X. When X is 546.43, the Integer(X) is 546; 
// when X is 23.899 the Integer(X) is 23. The String(X) and Value(A) are conversion functions. The resultant of the 
// function String(X) is the string value of the numeric X. The resultant of Value(A) is the numeric value of the string A.
// Concatenation is the combining of strings by placing the first string in front of the second one. For example, the 
// resultant of would be “45.”

#include <stdio.h>
#include <string.h>

int main() {
    int originalNumber;
    printf("Enter a four-digit number: ");
    scanf("%d", &originalNumber);
    // Step 2: Add the digits of the four-digit number
    int sum = 0;
    int temp = originalNumber;
    while (temp > 0) 
        {sum += temp % 10;
        temp /= 10;}
    // Step 3: Determine whether the sum of the digits is even or odd
    int isSumEven = (sum % 2 == 0);
    // Step 4: Calculate the fifth digit (check digit)
    int checkDigit = isSumEven ? 0 : 1;
    // Step 5: Concatenate the four-digit number and the check digit
    char newNumberStr[6]; // 4 digits + 1 check digit + 1 null terminator
    sprintf(newNumberStr, "%d%d", originalNumber, checkDigit);
    // Step 6: Print the original number and the new number
    printf("Original number: %d\n", originalNumber);
    printf("New number: %s\n", newNumberStr);
    // Step 7: Test with provided data
    int testData[] = {47371, 4631};
    for (int i = 0; i < 2; i++) 
        {originalNumber = testData[i];
        sum = 0;
        temp = originalNumber;
        while (temp > 0) 
            {sum += temp % 10;
            temp /= 10;}
        isSumEven = (sum % 2 == 0);
        checkDigit = isSumEven ? 0 : 1;
        sprintf(newNumberStr, "%d%d", originalNumber, checkDigit);
        printf("Original number: %d, New number: %s\n", originalNumber, newNumberStr);}
    return 0;
}
