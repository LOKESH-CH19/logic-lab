"""
Problem: Defuse the Bomb
Link: https://leetcode.com/problems/defuse-the-bomb/description/
Difficulty: Easy

Description:
          You have a bomb to defuse, and your time is running out! Your informer will provide you with a circular array code of length of n and a key k.
          To decrypt the code, you must replace every number. All the numbers are replaced simultaneously.

          If k > 0, replace the ith number with the sum of the next k numbers.
          If k < 0, replace the ith number with the sum of the previous k numbers.
          If k == 0, replace the ith number with 0.
As code is circular, the next element of code[n-1] is code[0], and the previous element of code[0] is code[n-1].
Given the circular array code and an integer key k, return the decrypted code to defuse the bomb!

Approach:
        Sliding Window is the approach used for solving the problem simply make the into a circular loop and for value of k.
        we can traverse upto k elements in the array and using array slicing we can add up them and store them
          
Time Complexity: O(N*K)
Space Complexity: O(N)
"""


class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        arr=[]
        num=code*3
        i=len(code)
        if k==0:
            arr=[0]*i
        else:
            for j in range(i,2*i):
                if k>0:
                    arr.append(sum(num[j+1:j+k+1]))
                else:
                    arr.append(sum(num[j-1:j+k-1:-1]))
        return arr
