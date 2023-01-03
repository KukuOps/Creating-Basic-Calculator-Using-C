#include <stdio.h>

int main()
{
    float num1, num2, output;
    char op;
    printf("\n Choose Operator (+, -, *, /)  :  ");
    scanf("%c", &op);
    printf("\n Enter two (2) numbers  :  ");
    scanf("%f%f", &num1, &num2);
    switch (op)
    {
    case '+':
        output = num1 + num2;
        break;
    case '-':
        output = num1 - num2;
        break;
    case '*':
        output = num1 * num2;
        break;
    case '/':
        output = num1 / num2;
        break;
    default:
        printf("\n You have enetered an Invalid Operator ");
    }
    printf("\n %.2f", output);
    return 0;
}
