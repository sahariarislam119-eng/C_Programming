#include <stdio.h>
#include <stdlib.h>

int main() {
    char operator;
    double num1, num2, result;
    int keep_running = 1;

    while (keep_running) {
        printf("\n--- Simple C Calculator ---\n");
        printf("Choose an operator (+, -, *, /) or type 'q' to quit: ");
        
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q') {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
            printf("Error: Invalid operator! Please try again.\n");
            continue;
        }

        printf("Enter two numbers (e.g., 5.5 2): ");
        if (scanf("%lf %lf", &num1, &num2) != 2) {
            printf("Error: Invalid input. Please enter numeric values.\n");
            while(getchar() != '\n'); 
            continue;
        }

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
        }
    }

    return 0;
}