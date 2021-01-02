/* 	Author:		Vishal Gaur
* 	Created:	02-01-2021  14:07:21
*/

#include <stdio.h>

int binarySearch(int a[], int n, int x)
{
  int st = 0, ed = n - 1;
  while (st <= ed)
  {
    int mid = st + (ed - st) / 2;
    if (a[mid] == x)
      return mid;
    if (a[mid] < x)
      st = mid + 1;
    else
      ed = mid - 1;
  }
  return -1;
}

int main()
{
  int arr[] = {11, 16, 25, 78, 89, 120};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x, res;

  x = 78;
  res = binarySearch(arr, n, x);
  if (res >= 0)
    printf("%d found at index %d\n", x, res);
  else
    printf("%d not found!\n", x);

  x = 10;
  res = binarySearch(arr, n, x);
  if (res >= 0)
    printf("%d found at index %d\n", x, res);
  else
    printf("%d not found!\n", x);

  return 0;
}