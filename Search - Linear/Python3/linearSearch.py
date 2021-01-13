# Author:   Vishal Gaur
# Created:  03-01-2021  22:21:11

# function to search an element using linear seaching
def linearSearch(a, x):
    for i in range(len(a)):
        if a[i] == x:
            return i

    return -1



# Driver Code to test above function

arr = [45, 76, 12, 19, 43, 48, 56, 67]

x = 18
res = linearSearch(arr, x)
if res >= 0:
    print(x, "found at index", res)
else:
    print(x, "not found!")

x = 43
res = linearSearch(arr, x)
if res >= 0:
    print(x, "found at index", res)
else:
    print(x, "not found!")
