// Q25 (Conditional Statements)
// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
// Sample:
// Input: 4 2 +
// Output: 6

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/': 
            if(b != 0) 
                printf("%d", a / b); 
            else 
                printf("Division by zero error"); 
            break;
        case '%': 
            if(b != 0) 
                printf("%d", a % b); 
            else 
                printf("Division by zero error"); 
            break;
        default: printf("Invalid operator"); break;
    }

    return 0;
}
