#include<stdio.h>

int main()
{
    int a,b;
    int op;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter your Choice : ");
    scanf("%d",&op);
    switch(op)
    {
    case 1	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    default	:
        printf("Enter Your Correct Choice.");

    }

    return 0;

}
