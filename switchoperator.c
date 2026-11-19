#include <stdio.h>

void main() 
{
    int a, b;
    char op;

    printf("Enter sum (example: 10 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': printf("Ans: %d\n", a + b); break;
        case '-': printf("Ans: %d\n", a - b); break;
        case '*': printf("Ans: %d\n", a * b); break;
        case '/': printf("Ans: %d\n", a / b); break;
    }
}