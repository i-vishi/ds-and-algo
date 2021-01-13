/* 	Author:		Vishal Gaur
* 	Created:	13-01-2021  09:45:23
*/

#include <stdio.h>

// helper function to get pivot
int partition(int a[], int l, int h)
{
  int p = a[h];
  int i = l;
  for (int j = l; j <= h - 1; j++)
  {
    if (a[j] < p)
    {
      int tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
      i++;
    }
  }
  int tmp = a[i];
  a[i] = a[h];
  a[h] = tmp;
  return i;
}

// function to sort an array using quick sort
void quickSort(int a[], int l, int h)
{
  if (l < h)
  {
    int pivot = partition(a, l, h);
    quickSort(a, l, pivot - 1);
    quickSort(a, pivot + 1, h);
  }
}

// main function to test above function

int main()
{
  int arr[] = {5, 46, 12, 53, 29, 6, 1, 42};
  int n = sizeof(arr) / sizeof(arr[0]);

  quickSort(arr, 0, n - 1);

  printf("Sorted Array :\t");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}