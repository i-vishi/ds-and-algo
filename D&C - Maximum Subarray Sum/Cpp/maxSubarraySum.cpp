/* 	Author:		Vishal Gaur
* 	Created:	06-26-2021  17:14:44
*/

#include <bits/stdc++.h>

using namespace std;

// function to find max crossing subarray
vector<int> findMaxCrossingSubarray(vector<int> A, int low, int high, int mid)
{
    int sum = 0;
    int leftSum = INT_MIN;
    int maxLeft = mid;

    for (int i = mid; i >= low; i--)
    {
        sum += A[i];
        if (sum > leftSum)
        {
            leftSum = sum;
            maxLeft = i;
        }
    }

    sum = 0;
    int rightSum = INT_MIN;
    int maxRight = mid;

    for (int i = mid+1; i <= high; i++)
    {
        sum += A[i];
        if (sum > rightSum)
        {
            rightSum = sum;
            maxRight = i;
        }
    }

    return {maxLeft, maxRight, leftSum + rightSum};
}

// function to find maximum subarray
vector<int> findMaxSubarray(vector<int> A, int low, int high)
{
    if (low == high)
    {
        return {low, high, A[low]};
    }
    else
    {
        vector<int> ans;

        int mid = (low + high) / 2;
        vector<int> leftAns = findMaxSubarray(A, low, mid);
        vector<int> rightAns = findMaxSubarray(A, mid + 1, high);
        vector<int> crossAns = findMaxCrossingSubarray(A, low, high, mid);

        if (leftAns[2] >= rightAns[2] && leftAns[2] >= crossAns[2])
            ans = leftAns;
        else if (rightAns[2] >= leftAns[2] && rightAns[2] >= crossAns[2])
            ans = rightAns;
        else
            ans = crossAns;

        return ans;
    }
}

// main function to test above function

int main()
{
    vector<int> arr = {1, -4, -8, 6, 9, -4, -5, 10};
    int len = arr.size();

    vector<int> res = findMaxSubarray(arr, 0, len - 1);

    cout << "Maximum Subarray Sum is " << res[2] << endl;
    cout << "And subarray is: ";
    for (int i = res[0]; i <= res[1]; i++)
        cout << arr[i] << "  ";
    cout << endl;

    return 0;
}
