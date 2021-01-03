/* 	Author:		Vishal Gaur
* 	Created:	03-01-2021  21:53:23
*/

#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int> &a)
{
  for (int i = 1; i < a.size(); i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (a[j - 1] > a[j])
        swap(a[j], a[j - 1]);
      else
        break;
    }
  }
}

int main()
{
  vector<int> arr = {12, 58, 40, 16, 49, 26, 24};

  insertionSort(arr);

  cout << "Sorted Array :\t";
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}