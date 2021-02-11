//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
    int main()
    {
      float h,b,d,vol;
      printf("Enter the height,breadth,depth :");
      scanf("%f%f%f",&h,&b,&d);
      vol=((h*b*d)+(d/b))/3;
      printf("volume of the tromboloid is %f",vol);
      return 0;
     }
