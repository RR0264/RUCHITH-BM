//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
{
  int n;
  int d;

} Fraction;

int
gcd (int x, int y)
{
 while (x != y) { 

        if (x > y)         

            x = x - y;         

        else        

            y = y - x;         

    } 

    return x;
};

Fraction
sum (Fraction f1, Fraction f2)
{
  Fraction c;
  int x, y;
  x = (f1.n * f2.d) + (f2.n * f1.d);
  y = (f1.d * f2.d);
  int g = gcd(x,y);
  c.n = x / g;
  c.d = y / g;
  return c;
}



Fraction
input (int a)
{
  Fraction c;
  printf ("Enter fraction %d: numerator and denominator:", a);
  scanf ("%d%d", &c.n, &c.d);  
  if(c.d==0)
  {     
      printf("please enter valid denominator ");                                                
      c=input (a); 
      
  }
  return c;
};

void
display (Fraction f1, Fraction f2, Fraction r)
{
  printf ("Result of %d/%d + %d/%d = %d/%d", f1.n, f1.d, f2.n, f2.d,r.n, r.d);
}

int
main ()
{
  Fraction f1 = input (1);
  Fraction f2 = input (2);
  Fraction r = sum (f1, f2);
  display (f1, f2, r);
  return 0;
}



 
