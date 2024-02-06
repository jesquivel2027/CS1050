#include <stdio.h>
int main()
{
    float num1, num2, result;
    char operator;
printf("Operation Selection (+, -, *, /): ");
scanf("%c", &operator);
printf("Enter the first operand: ");
scanf("%f", &num1);
printf("Enter the second operand: ");
scanf("%f", &num2);

switch (operator) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    // default case to handle invalid operators
    default:
        printf("Error! Invalid Operator");
        return 1; // Exit the program with an error code
}
printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
return 0;
}