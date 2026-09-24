#include <stdio.h>

int main() {
    int num1, num2;
    char operation;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operation character (+, -, *, /, %%): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result: %d\n", num1 % num2);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator entry.\n");
    }

    return 0;
}
