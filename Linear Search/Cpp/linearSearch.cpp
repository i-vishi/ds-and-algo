/* 	Author:		Vishal Gaur
* 	Created:	03-01-2021  22:15:15
*/

#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &a, int x)
{
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == x)
      return i;
  }
  return -1;
}

int main()
{
  vector<int> arr = {45, 65, 85, 12, 35, 97, 1, 7, 19};
  int x, res;
  x = 19;
  res = linearSearch(arr, x);
  if (res >= 0)
    cout << x << " found at index " << res;
  else
    cout << x << " not found!";
  cout << endl;

  x = 10;
  res = linearSearch(arr, x);
  if (res >= 0)
    cout << x << " found at index " << res;
  else
    cout << x << " not found!";
  cout << endl;

  return 0;
}