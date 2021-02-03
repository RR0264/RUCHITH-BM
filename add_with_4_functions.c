//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int addition(int num1 , int num2)
{
    Int sum;
    sum = num1 + num2;
    return sum;
}

int main()
{
    int number1,number2,total;
    printf("Enter two numbers:");
    scanf("%d%d",&number1,&number2);
    total = addition(number1 , number2);
    printf("%.2d+%.2d = %.2d\n",number1,number2,total);
    return 0;
}

