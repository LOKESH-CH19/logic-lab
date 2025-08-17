"""
Problem: Pascal Triangle
Link: https://leetcode.com/problems/pascals-triangle/description/
Difficulty: Easy

Description:
            Given an integer numRows, return the first numRows of Pascal's triangle.
            In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
                                       1
                                      1 1
                                     1 2 1
                                    1 3 3 1
Approach:
        

Time Complexity: O(n^2)
Space Complexity: O(n^2)
"""



class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        arr=[]
        if numRows==1:
            return [[1]]
        if numRows==2:
            return [[1],[1,1]]
        arr=[[1],[1,1]]
        for i in range(2,numRows):
            arr1=[1]
            for j in range(i-1):
                temp=sum(arr[i-1][j:j+2])
                # print(arr[i-1][i-2:i])
                arr1.append(temp)
            arr1.append(1)
            arr.append(arr1)
        return(arr)
