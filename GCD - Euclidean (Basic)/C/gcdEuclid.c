/* 	Author:		Vishal Gaur
* 	Created:	23-01-2021  21:50:34
*/

#include <stdio.h>

// function to find GCD using Basic Euclidean Algorithm
int gcdEuclid(int a, int b)
{
  if (a == 0)
    return b;
  else
    return gcdEuclid(b % a, a);
}

// main function to test above function

int main()
{
  int a, b, g;

  a = 35, b = 217;
  g = gcdEuclid(a, b);
  printf("GCD of %d & %d is: %d\n", a, b, g);

  a = 24, b = 5;
  g = gcdEuclid(a, b);
  printf("GCD of %d & %d is: %d\n", a, b, g);

  return 0;
}