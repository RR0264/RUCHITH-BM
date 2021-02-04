//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>

int first_num()
{
int num;
printf("Enter first number ");
scanf("%d",&num);
return num;
}

int second_num()
{
int num;
printf("enter second number ");
scanf("%d",&num);
return num;
}

int add_two_num(int first_num,int second_num)
{ 
return (first_num+second_num);
}
int print(int sum)
{
 printf("sum of the 2 numbers is = %d\n",sum);
}

int main()
{
int a=first_num();
int b=second_num();
int sum=add_two_num(a,b);
print(sum);
return 0;
}
