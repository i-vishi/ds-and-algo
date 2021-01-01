/* 	Author:		Vishal Gaur
* 	Created:	01-01-2021  13:05:42
*/

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &a)
{
  for (int i = 0; i < a.size() - 1; i++)
  {
    for (int j = 0; j < a.size() - i - 1; j++)
    {
      if (a[j] > a[j + 1])
        swap(a[j], a[j + 1]);
    }
  }
}

int main()
{
  vector<int> arr = {31, 56, 25, 78, 19, 20};

  bubbleSort(arr);

  cout << "Sorted Array :\t";
  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";
  cout << endl;

  return 0;
}