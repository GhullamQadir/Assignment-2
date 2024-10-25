#include <stdio.h>

int main () {

    double num1,num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Emter the second number:");
    scanf("%lf", &num2);
    printf("Enter an operator (+,-,*,/):");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf  = %.2lf\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf  = %.2lf\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf * %.2lf  = %.2lf\n", num1, num2, result);
} else if (operator == '/') {
    if (num2!= 0 ) {
        result = num1 / num2;
        printf("Result: %.2lf / %,2lf = %.2lf\n", num1, num2, result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    } else {
        printf("Error : Invalid operator. Please use +,-,*, or /.\n");
    }
    return 0;
    }