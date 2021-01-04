/* 	Author:		Vishal Gaur
* 	Created:	04-01-2021  18:44:44
*/

#include <bits/stdc++.h>

using namespace std;

int rodCutting(vector<int> values, int n)
{
  int pro[n + 1];
  pro[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    int mx = INT_MIN;
    for (int j = 0; j < i; j++)
      mx = max(mx, values[j] + pro[i - j - 1]);
    pro[i] = mx;
  }
  return pro[n];
}

int main()
{
  vector<int> values = {1, 4, 8, 6, 9, 4};
  int len = values.size();
  cout << "Maximum profit can be " << rodCutting(values, len) << endl;
  return 0;
}