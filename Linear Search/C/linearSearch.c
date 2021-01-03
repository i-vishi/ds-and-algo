/* 	Author:		Vishal Gaur
* 	Created:	03-01-2021  21:09:12
*/

#include <stdio.h>

int linearSearch(int a[], int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
      return i;
  }
  return -1;
}

int main()
{
  int arr[] = {45, 65, 85, 12, 35, 97, 1, 7, 19};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x, res;

  x = 19;
  res = linearSearch(arr, n, x);
  if (res >= 0)
    printf("%d found at index %d\n", x, res);
  else
    printf("%d not found!\n", x);

  x = 10;
  res = linearSearch(arr, n, x);
  if (res >= 0)
    printf("%d found at index %d\n", x, res);
  else
    printf("%d not found!\n", x);

  return 0;
}