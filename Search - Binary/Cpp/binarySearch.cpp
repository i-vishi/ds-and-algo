/* 	Author:		Vishal Gaur
* 	Created:	02-01-2021  14:27:26
*/

#include <iostream>
#include <vector>

using namespace std;

// function to search an element using binary seaching
int binarySearch(vector<int> &a, int x)
{
  int st = 0, ed = a.size() - 1;
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


// main function to test above function

int main()
{
  vector<int> arr = {11, 16, 25, 78, 89, 120};
  int x, res;
  x = 78;
  res = binarySearch(arr, x);
  if (res >= 0)
    cout << x << " found at index " << res;
  else
    cout << x << " not found!";
  cout << endl;

  x = 10;
  res = binarySearch(arr, x);
  if (res >= 0)
    cout << x << " found at index " << res;
  else
    cout << x << " not found!";
  cout << endl;

  return 0;
}