//WAP to find the sum of two fractions.
#include<stdio.h>
#include<conio.h>
typedef struct
{
  int n;
  int d;

} Fraction;

int
simplified (int x, int y)
{
  if (x == 0)
    {
      return y;
    }
  return simplified (x % y, x);
};

Fraction
sum (Fraction f1, Fraction f2)
{
  Fraction c;
  int x, y;
  x = (f1.n * f2.d) + (f2.n * f1.d);
  y = (f1.d * f2.d);
  c.n = x / simplified (x, y);
  c.d = y / simplified (x, y);
  return c;
}



Fraction
input (Fraction c, int a)
{
  printf ("Enter fraction %d: numerator and denominator:", a);
  scanf ("%d%d", &c.n, &c.d);
  return c;
};

void
display (Fraction r)
{
  printf ("Result=%d/%d", r.n, r.d);
}

int
main ()
{
  Fraction f1 = input (f1, 1);
  Fraction f2 = input (f2, 2);
  Fraction r = sum (f1, f2);
  display (r);
  return 0;
}
