#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Helper function to clear the input buffer and prevent infinite loops on bad input
void clear_buffer() {
    while(getchar() != '\n');
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n========== Advanced C Calculator ==========\n");
        printf(" 1. Addition (+)        6. Square Root (sqrt)\n");
        printf(" 2. Subtraction (-)     7. Sine (sin)\n");
        printf(" 3. Multiplication (*)  8. Cosine (cos)\n");
        printf(" 4. Division (/)        9. Tangent (tan)\n");
        printf(" 5. Power (x^y)        10. Natural Log (ln)\n");
        printf(" 0. Exit\n");
        printf("===========================================\n");
        printf("Enter your choice (0-10): ");

        if (scanf("%d", &choice) != 1) {
            printf("Error: Invalid input. Please enter a number.\n");
            clear_buffer();
            continue;
        }

        if (choice == 0) {
            printf("Exiting advanced calculator. Goodbye!\n");
            break;
        }

        // Logic for operations requiring two numbers
        if (choice >= 1 && choice <= 5) {
            printf("Enter two numbers (e.g., 5 2): ");
            if (scanf("%lf %lf", &num1, &num2) != 2) {
                printf("Error: Invalid input. Please enter numeric values.\n");
                clear_buffer();
                continue;
            }
        } 
        // Logic for operations requiring only one number
        else if (choice >= 6 && choice <= 10) {
            printf("Enter one number: ");
            if (scanf("%lf", &num1) != 1) {
                printf("Error: Invalid input. Please enter a numeric value.\n");
                clear_buffer();
                continue;
            }
        } else {
            printf("Error: Invalid choice! Please select a number from 0 to 10.\n");
            continue;
        }

        // Perform the selected operation
        switch (choice) {
            case 1: 
                result = num1 + num2; 
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result); 
                break;
            case 2: 
                result = num1 - num2; 
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result); 
                break;
            case 3: 
                result = num1 * num2; 
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result); 
                break;
            case 4: 
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else { 
                    result = num1 / num2; 
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result); 
                }
                break;
            case 5: 
                result = pow(num1, num2); 
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result); 
                break;
            case 6: 
                if (num1 < 0) {
                    printf("Error: Square root of a negative number is undefined in real numbers.\n");
                } else { 
                    result = sqrt(num1); 
                    printf("Result: sqrt(%.2lf) = %.2lf\n", num1, result); 
                }
                break;
            case 7: 
                result = sin(num1); 
                printf("Result: sin(%.2lf) = %.2lf\n", num1, result); 
                break;
            case 8: 
                result = cos(num1); 
                printf("Result: cos(%.2lf) = %.2lf\n", num1, result); 
                break;
            case 9: 
                result = tan(num1); 
                printf("Result: tan(%.2lf) = %.2lf\n", num1, result); 
                break;
            case 10: 
                if (num1 <= 0) {
                    printf("Error: Logarithm of zero or a negative number is undefined.\n");
                } else { 
                    result = log(num1); 
                    printf("Result: ln(%.2lf) = %.2lf\n", num1, result); 
                }
                break;
        }
    }

    return 0;
}