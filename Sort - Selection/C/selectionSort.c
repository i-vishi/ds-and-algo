/* 	Author:		Vishal Gaur
* 	Created:	03-01-2021  22:02:06
*/

#include <stdio.h>


// function to sort an array using selection sort
void selectionSort(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIdx = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[minIdx])
        minIdx = j;
    }
    if (minIdx != i)
    {
      int tmp = a[i];
      a[i] = a[minIdx];
      a[minIdx] = tmp;
    }
  }
}


// main function to test above function

int main()
{
  int arr[] = {12, 58, 40, 16, 49, 26, 24};
  int n = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, n);

  printf("Sorted Array :\t");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}