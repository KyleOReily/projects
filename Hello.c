#include <stdio.h>

int main()
{
    float num1, num2;
    float sum, subtract, divide, multiply;
    char operator;
    printf("enter two numbers -");
    scanf("%f %f", &num1, &num2);
    printf("enter the operator-");
    scanf(" %c", &operator);
    sum = num1 + num2;
    subtract = num1 - num2;
    divide = num1 / num2;
    multiply = num1 * num2;
    switch (operator)
    {
    case '+':
        printf("%.2f\n", sum);
        break;
    case '-':
        printf("%.2f\n", subtract);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error, cannot divide");
        }
        else
        {
            printf("%.2f\n", divide);
        }

        break;

    case '*':
        printf("%.2f\n", multiply);
        break;
    default:
        printf("Nothing matched");
    }
    char decision, yes, no;
    printf("do you want to do another calculation?");
    scanf(" %c", &decision);
    if (decision == yes)
    {

        printf("enter two numbers -");
        scanf("%f %f", &num1, &num2);
        printf("enter the operator-");
        scanf(" %c", &operator);
        switch (operator)
        {
        case '+':
            printf("%.2f\n", sum);
            break;
        case '-':
            printf("%.2f\n", subtract);
            break;
        case '/':
            if (num2 == 0)
            {
                printf("Error, cannot divide");
            }
            else
            {
                printf("%.2f\n", divide);
            }

            break;

        case '*':
            printf("%.2f\n", multiply);
            break;
        default:
            printf("Nothing matched");
        }
    }
    else
    {
        printf("end");
    }
    return 0;
}