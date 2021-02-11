//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
    float volume(float h,float b,float d)
    {
       return ((h*b*d)+(d/b))/3;
     }
     float getheight()
     {
         float h;
        printf("Enter the h:");
        scanf("%f",&h);
        return h;
     }
     float getbreath()
     {
         float b;
        printf("Enter the b:");
        scanf("%f",&b);
        return b;
     }
      float getdiameter()
     {
         float d;
        printf("Enter the d:");
        scanf("%f",&d);
        return d;
     }

     float displaydata(float vol){
        printf("Volume of the tromboloid is :%2f",vol);
        return 0;
     }
     int main()
     {
          float h,b,d,vol;
          h=getheight();
          b=getbreath();
          d=getdiameter();
         vol=volume(h,b,d);
         displaydata(vol);
     }
