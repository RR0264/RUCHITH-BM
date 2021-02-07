//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>

int  take_the_array_size(){
int temp;
printf("enter how many numbers you want to provide:\n");
scanf("%d",&temp);
if(temp<0){
printf("enter a valid no:\n");
return take_the_array_size();}

return temp;}

void array_elements(int* a,int n){
for(int i =0;i<n;i++){
printf("\n enter the no:");
scanf("%d",&a[i]);
}};

int calc_sum(int* a,int n){
int z=0;
for (int i =0;i<n;i++){
z = z + a[i];
}
return z;
};

void show_output(int sum){
printf("\n sum of the numbers is: %d",sum);
};

int main(){
int no,sum;
no = take_the_array_size();
int arr[no];
array_elements(arr,no);
sum = calc_sum(arr,no);
show_output(sum);
return 0;}

