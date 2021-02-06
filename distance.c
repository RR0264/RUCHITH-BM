//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int main()
{
float x2,x1,y2,y1,d;
float point1x();
float point1y();
float point2x();
float point2y();

x1=point1x();
y1=point1y();

x2=point2x();
y2=point2y();
d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("Distance between the points =%f",d);
return 0;
}

float point1x()
{
float a;
printf("Enter the x coordinate of point one");
scanf("%f",&a);
return a;
}
float point1y()
{
float a;
printf("Enter the y coordinate of point one");
scanf("%f",&a);
return a;
}

float point2x()
{
float a;
printf("Enter the x coordinate of point two");
scanf("%f",&a);
return a;
}
float point2y()
{
float a;
printf("Enter the y coordinate of point two");
scanf("%f",&a);
return a;
}
