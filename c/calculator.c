#include <stdio.h>

int main() {
    char operator;
    double number1, number2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &number1, &number2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", number1, number2, number1 * number2);
            break;
        case '/':
            if (number2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", number1, number2, number1 / number2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
