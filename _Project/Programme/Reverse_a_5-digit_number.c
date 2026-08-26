#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    // Input a 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Ensure the number is 5-digit
    if (num < 10000 || num > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1; // Exit if the input is invalid
    }

    // Reverse the number
    while (num > 0) {
        digit = num % 10;        // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num /= 10;               // Remove last digit
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
