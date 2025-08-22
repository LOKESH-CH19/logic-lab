"""
Problem: Find the minimun area to cover all 1's
Link: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/description/?envType=daily-question&envId=2025-08-22
Difficulty: Medium

Description:
            You are given a 2D binary array grid. Find a rectangle with horizontal and vertical sides with the smallest area,
            such that all the 1's in grid lie inside this rectangle.

            Return the minimum possible area of the rectangle.
Approach:
            The approach to solve the problem is to find the no.of rows and 1st element of the rectangle and extreme right point of the rectangle.
            in given grid a 2-d array , each array at index i represents the row elemnts traverse through each individual array.
            when you find the first element store the index to count no.of rows to include..finding breadth of rectangle
            while traversing each row ...observe the index at which the 1's are situated.
            to find the length of rectangle.took to variables min and max assign 999 and 0 respectively.
            whenever we counter 1 update min and max
            whever a row has 1 update the index variable to i.to find last row.
            now we have max and min ....giving length and we have ind which is index of last row and we also store the value of 1st row when we counter first 1.
            now we have length(max-min+1) and no.of rows that is breadth(ind - row_min+1)
            return the multiplication of length and breadth
            
Time Complexity: O(M*N)
Space Complexity: O(1)
"""



class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        row_count=0
        min=999
        max=0
        row_min=-1
        row_max=0
        j=0
        for arr in grid:
            if 1 in arr and row_min==-1:
                row_min=j
                row_max=j
            elif 1 in arr:
                row_max=j
            else:
                pass             
            for i in range(len(arr)):
                if arr[i]==1:
                    if min>i:
                        min=i
                    if max<i:
                        max=i
            j+=1
        return (row_max-row_min+1) *(max-min+1)
            
    
