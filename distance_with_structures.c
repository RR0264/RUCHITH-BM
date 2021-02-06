//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
int  take_the_array_size()
{
int temp;
printf("Please enter how many numbers you want to provide:\n");
scanf("%d",&temp);
if(temp<0)
 {
 printf("Please enter a valid no:\n");
 return take_the_array_size();
 }
return temp;
}
void array_elements(int* a,int n)
{
for(int i =0;i<n;i++)
 {
 printf("\nPlease enter the no:");
 scanf("%d",&a[i]);
 }
};
int calc_sum(int* a,int n)
{
int z=0;
for (int i =0;i<n;i++)
 {
 z = z + a[i];
 }
return z;
};
void show_output(int sum)
{
printf("\nThe sum of the numbers is: %d",sum);
};
int main()
{
int no,sum;
no = take_the_array_size();
int arr[no];
array_elements(arr,no);
sum = calc_sum(arr,no);
show_output(sum);
return 0;
}
 
