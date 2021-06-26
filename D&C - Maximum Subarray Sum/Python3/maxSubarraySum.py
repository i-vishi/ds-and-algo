# Author:   Vishal Gaur
# Created:  06-26-2021  17:45:12

import math

# function to find max crossing subarray


def findMaxCrossingSubarray(A, low, mid, high):
    sum = 0
    leftSum = -math.inf
    maxLeft = mid

    for i in range(mid, low, -1):
        sum += A[i]
        if sum > leftSum:
            leftSum = sum
            maxLeft = i

    sum = 0
    rightSum = -math.inf
    maxRight = mid+1
    for i in range(mid+1, high+1):
        sum += A[i]
        if sum > rightSum:
            rightSum = sum
            maxRight = i

    return maxLeft, maxRight, leftSum+rightSum

# function to find maximum subarray


def findMaxSubarray(A, low, high):
    if low == high:
        return low, high, A[low]

    mid = (low+high) // 2

    leftLow, leftHigh, leftSum = findMaxSubarray(A, low, mid)
    rightLow, rightHigh, rightSum = findMaxSubarray(A, mid+1, high)
    crossLow, crossHigh, crossSum = findMaxCrossingSubarray(A, low, mid, high)

    if leftSum >= rightSum and leftSum >= crossSum:
        return leftLow, leftHigh, leftSum
    elif rightSum >= leftSum and rightSum >= crossSum:
        return rightLow, rightHigh, rightSum
    else:
        return crossLow, crossHigh, crossSum


# Driver Code to test above function

arr = [103, -74, -38, 96, 19, -34, -55, 50, 123]
size = len(arr)

start, end, sum = findMaxSubarray(arr, 0, size-1)

print("Maximum Subarray Sum is ", sum)
print("Subrray is: ", arr[start:end+1])
