/* 	Author:		Vishal Gaur
* 	Created:	01-01-2021  13:15:32
*/

#include <stdio.h>

// function to sort an array using bubble sort
void bubbleSort(int a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        int tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }
}


// main function to test above function

int main()
{
  int arr[] = {31, 56, 25, 78, 19, 20};
  int n = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, n);

  printf("Sorted Array :\t");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}