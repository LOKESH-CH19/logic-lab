"""
Problem:Bitwise ORs of subarray
Link: https://leetcode.com/problems/bitwise-ors-of-subarrays/
Difficulty: Medium

Description:
            Given an integer array arr, return the number of distinct bitwise ORs of all the non-empty subarrays of arr.
            The bitwise OR of a subarray is the bitwise OR of each integer in the subarray. The bitwise OR of a subarray of one integer is that integer.
            A subarray is a contiguous non-empty sequence of elements within an array.

Approach:
            initilising two empty sets for keep tracking of older results and final results.
            traverse the array,form possible contiguoud sub arrays with the element in index i.
            initilise a set for tracking all or values obtained by element i
            perform bitwise or operation and store in prev
            now find bitwise or of elements in prev with element i


Time Complexity: O(n^2)
Space Complexity: O(n^2)
"""

class Solution:
    def subarrayBitwiseORs(self, arr: List[int]) -> int:
        total=set()
        prev=set()
        for num in arr:
            cur={num}
            for i in prev:
                cur.add(num | i)
            total |=cur
            prev=cur
        return(len(total))
