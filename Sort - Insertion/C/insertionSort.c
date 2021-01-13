/* 	Author:		Vishal Gaur
* 	Created:	03-01-2021  21:47:23
*/

#include <stdio.h>

// function to sort an array using insertion sort
void insertionSort(int a[], int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (a[j - 1] > a[j])
      {
        int tmp = a[j];
        a[j] = a[j - 1];
        a[j - 1] = tmp;
      }
      else
        break;
    }
  }
}


// main function to test above function

int main()
{
  int arr[] = {12, 58, 40, 16, 49, 26, 24};
  int n = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, n);

  printf("Sorted Array :\t");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}