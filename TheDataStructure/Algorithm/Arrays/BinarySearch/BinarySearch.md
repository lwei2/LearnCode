Binary search is used to find the index of an element in a sorted array. If the element doesn’t exist, that can be determined efficiently as well. The algorithm divides the input array by half at every step. After every step, either we have found the index that we are looking for or half of the array can be discarded. Hence, solution can be calculated in O(logn) time.

Here’s how algorithm works.

At every step, consider the array between low and high indices
Calculate the mid index.
If element at the mid index is the key, return mid.
If element at mid is greater than the key, then reduce the array size such that high becomes mid - 1.
Index at low remains the same.
If element at mid is less than the key, then reduce the array size such that low becomes mid + 1. Index at high remains the same.
When low is greater than high, key doesn’t exist. Return -1.
