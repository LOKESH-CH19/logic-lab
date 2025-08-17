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
           so we store a 2-d array each ith array in 2-d array represent the elements of the ith roe elements.
            
Approach:
        yeah,the approach is simple the n dexcribe no.of rows in the triangle . 
        intially row 1 has [1] and row 2 has [1,1].
        for each row, begin and end should be 1.
        For the middle values, add two numbers above from the previous row.
        Repeat until you have n rows
            
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
                arr1.append(temp)
            arr1.append(1)
            arr.append(arr1)
        return(arr)
