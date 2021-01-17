/* 	Author:		Vishal Gaur
* 	Created:	17-01-2021  20:23:12
*/

#include <iostream>
#include <vector>

using namespace std;

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

  a = 14, b = 35;
  g = gcdEuclid(a, b);
  cout << "GCD of " << a << " & " << b << " is: " << g << endl;

  a = 56, b = 125;
  g = gcdEuclid(a, b);
  cout << "GCD of " << a << " & " << b << " is: " << g << endl;

  return 0;
}