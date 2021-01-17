# Author:   Vishal Gaur
# Created:  17-01-2021  20:31:34

# function to find GCD using Basic Euclidean Algorithm
def gcdEuclid(a, b):
    if a == 0:
        return b
    else:
        return gcdEuclid(b % a, a)


# Driver Code to test above function

a = 14
b = 35
g = gcdEuclid(a, b)
print("GCD of", a, "&", b, "is: ", g)

a = 56
b = 125
g = gcdEuclid(a, b)
print("GCD of", a, "&", b, "is: ", g)
