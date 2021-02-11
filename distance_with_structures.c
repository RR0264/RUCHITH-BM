//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct coordinates
{
  int x, y;
} Coordinates;

double
getDistance (struct coordinates a, struct coordinates b)
{
  double d;
  d = sqrt ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
  return d;
}

Coordinates
input (Coordinates a,int c)
{
  printf ("Enter coordinate of point %d: ",c);
  scanf ("%d %d", &a.x, &a.y);
  return a;
};

void display(double d){
  printf ("Distance between a and b: %lf\n", d);
}

int main ()
{
  double d;
  struct coordinates a, b;
  a = input (a,1);
  b = input (b,2);
  d = getDistance (a, b);
  display(d);
  return 0;
}
