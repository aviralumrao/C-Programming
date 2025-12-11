// C program to perform basic arithmetic operations based on user input
#include <stdio.h>
int main()
{
    float a, b, sum, prod, diff, div;
    char op;
    printf("Input first number : ");
    scanf("%f", &a);
   printf("Input the operator (+,-,*,/): ");
    scanf(" %c", &op);
    printf("Input second number : ");
    scanf("%f", &b); 

    switch (op)
    {
    case '+':
        sum = a + b;
        printf("a + b = %.2f", sum);
        break;
    case '-':
        diff = a - b;
        printf("a - b = %.2f", diff);
        break;
    case '*':
        prod = a * b;
        printf("a * b = %.2f", prod);
        break;
    case '/':
        div = a / b;
        printf("a / b = %.2f", div);
        break;
    default:
        printf("!!INVALID OPERATOR!!");
        break;
    }
    return 0;
}

//output
// Input first number : 10
// Input the operator (+,-,*,/): *
// Input second number : 5
// a * b = 50.00
