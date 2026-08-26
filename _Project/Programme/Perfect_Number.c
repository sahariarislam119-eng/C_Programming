#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of divisors excluding the number itself
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to sum
        }
    }

    // Check if the sum equals the original number
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
