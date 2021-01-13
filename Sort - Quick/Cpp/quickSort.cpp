/* 	Author:		Vishal Gaur
* 	Created:	13-01-2021  09:32:15
*/

#include <bits/stdc++.h>

using namespace std;

// helper function to get pivot
int partition(vector<int> &a, int l, int h)
{
  int p = a[h];
  int i = l;
  for (int j = l; j <= h - 1; j++)
  {
    if (a[j] < p)
    {
      swap(a[i], a[j]);
      i++;
    }
  }
  swap(a[i], a[h]);
  return i;
}

// function to sort an array using quick sort
void quickSort(vector<int> &a, int l, int h)
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
  vector<int> arr = {5, 46, 12, 53, 29, 6, 1, 42};
  int n = arr.size();

  quickSort(arr, 0, n - 1);

  cout << "Sorted Array :\t";
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}