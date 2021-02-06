//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
int main()
{
float h,b,d,vol;
float height();
float breadth();
float depth();
float volume(float h,float b, float d);
h=height();

b=breadth();

d=depth();
vol=volume(h,b,d);
printf("Volume =%f",vol);
return 0;
}

float  height()
{
    float x;
printf("Enter the H of tromboloid:");
scanf("%f",&x);
return x;
}


float  breadth()
{
    float y;
printf("Enter the B of tromboloid:");
scanf("%f",&y);
return y;
}
float  depth()
{
    float z;
printf("Enter the D of tromboloid:");
scanf("%f",&z);
return z;
}
float volume(float h,float b,float d)
{
float a=((h*d)+d)/(3*b);
return a;
}
