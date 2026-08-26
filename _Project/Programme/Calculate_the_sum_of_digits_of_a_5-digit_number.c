#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input a 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Ensure the number is 5-digit
    if (num < 10000 || num > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1; // Exit the program if input is invalid
    }

    // Loop to extract and sum the digits
    while (num > 0) {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add it to sum
        num /= 10;         // Remove the last digit
    }

    // Output the sum of digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
