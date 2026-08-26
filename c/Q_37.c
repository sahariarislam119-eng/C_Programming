#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter how many Non-Fibonacci numbers to print: ");
    scanf("%d", &n);

    long a = 0, b = 1, c;
    long nextNonFib = 2;

    while (count < n) {
        c = a + b;  // Next Fibonacci number

        // Print all numbers between b and c (exclusive), as they are not in Fibonacci series
        while (nextNonFib < c && count < n) {
            printf("%ld ", nextNonFib);
            nextNonFib++;
            count++;
        }

        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
