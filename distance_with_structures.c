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
input (int c)
{
  Coordinates a;
  printf ("Enter coordinate of point %d: ", c);
  scanf ("%d %d", &a.x, &a.y);
  return a;
};

void
display (Coordinates a, Coordinates b, double d)
{
  printf ("Distance between point (%d,%d) and point (%d,%d): %lf\n", a.x, a.y,
	  b.x, b.y, d);
}

int
main ()
{
  double d;
  struct coordinates a, b;
  a = input (1);
  b = input (2);
  d = getDistance (a, b);
  display (a, b, d);
  return 0;
}
