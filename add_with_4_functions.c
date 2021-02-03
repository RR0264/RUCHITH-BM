//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float addition(float num1 , float num2)
{
    float sum;
    sum = num1 + num2;
    return sum;
}

int main()
{
    float number1,number2,total;
    printf("Enter two numbers:");
    scanf("%f%f",&number1,&number2);
    total = addition(number1 , number2);
    printf("%.2f+%.2f = %.2f\n",number1,number2,total);
    return 0;
}
