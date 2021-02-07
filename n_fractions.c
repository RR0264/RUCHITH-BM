//WAP to find the sum of n fractions.
#include<stdio.h>

typedef struct fractions{
int num,den;
}Fractions;

int get_num(){
int temp;
printf("Enter The No Of Fractions You Want to Put: \n");
scanf("%d",&temp);
return temp;
};

void get_inputs(Fractions *a, int no){
for(int i = 0;i<no;i++){
printf("enter the numerator:\n");
scanf("%d",&a[i].num);
printf("enter the denominator:\n");
scanf("%d",&a[i].den);
}
};



void show_output(Fractions temp,Fractions *a,int no){
printf("sum of the fractions ");
for(int i=0;i<no;i++){
    if(i==no-1){
        printf(" %d/%d = %d/%d",a[i].num,a[i].den,temp.num,temp.den);
    }
    else{
    printf("%d/%d +",a[i].num,a[i].den);}
}
};

int gcd(int x,int y){
    if(x==0){
        return y;
    }
    
    return gcd(y%x,x);
};

Fractions calculate(Fractions final,int no, Fractions *a){
int x,y=0,test=1;
for(int i =0;i<no;i++){
test = test*a[i].den;}
final.den =test;

for(int i =0;i<no;i++){
x=a[i].num;
for(int j=0;j<no;j++){
if(i!=j){
x=x*a[j].den;
}
}
y=y+x;
}


final.num=y/ gcd(y,test);
final.den=test/ gcd(y,test);
return final; };

int main(){
int no,x,y=0,test=1,gcd;
Fractions final;
no = get_num();
Fractions  a[no];
get_inputs(a,no);
final = calculate(final,no,a);

show_output(final,a,no);
return 0;}
