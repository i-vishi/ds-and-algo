/* 	Author:		Vishal Gaur
* 	Created:	04-01-2021  20:32:21
*/

#include <stdio.h>

int rodCutting(int values[], int n)
{
  int pro[n + 1];
  pro[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    int mx = -1;
    for (int j = 0; j < i; j++)
    {
      int sm = values[j] + pro[i - j - 1];
      if (sm > mx)
        mx = sm;
    }
    pro[i] = mx;
  }
  return pro[n];
}

int main()
{
  int values[] = {3, 6, 8, 10, 14, 16};
  int len = sizeof(values) / sizeof(values[0]);
  printf("Maximum profit can be %d\n", rodCutting(values, len));
  return 0;
}