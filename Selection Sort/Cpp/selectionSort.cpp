/* 	Author:		Vishal Gaur
* 	Created:	03-01-2021  21:57:03
*/

#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &a)
{
  for (int i = 0; i < a.size() - 1; i++)
  {
    int minIdx = i;
    for (int j = i + 1; j < a.size(); j++)
    {
      if (a[j] < a[minIdx])
        minIdx = j;
    }
    if (minIdx != i)
    {
      swap(a[minIdx], a[i]);
    }
  }
}

int main()
{
  vector<int> arr = {12, 58, 40, 16, 49, 26, 24};

  selectionSort(arr);

  cout << "Sorted Array :\t";
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}