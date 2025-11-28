"""
Problem : Rearranging Fruits
Link : https://leetcode.com/problems/rearranging-fruits/
Description : You have two fruit baskets containing n fruits each. You are given two 0-indexed integer arrays basket1 and basket2 representing the cost of fruit in each basket. You want to make both baskets equal. To do so, you can use the following operation as many times as you want:
    Choose two indices i and j, and swap the ith fruit of basket1 with the jth fruit of basket2.
    The cost of the swap is min(basket1[i], basket2[j]).
    Two baskets are considered equal if sorting them according to the fruit cost makes them exactly the same baskets.
    Return the minimum cost to make both the baskets equal or -1 if impossible.

Approach : 
        I take a hash table and count the fruits from basket1 and from same hash table decrease the count of fruits if it also present in basket2.
        That remains me the fruits and their count which are only available in basket1 and basket2(-ve count).
        if count of any fruit type is odd that means it is impossible.
        initilise 2 arrays one for extra fruit type that need to swapped from basket1 and second array for basket2.
        sort both arrays one in asc and one in des at each index find the min element at that point use that value for min cost
        if the lowest element is still considered large we can alter by
        find the lowest element from both arrays use as a temoporary element to reduce the cost as swap the min element twice , one for swap basket1 with min and next min with basket2 fruit type
        find which gives the lowest value for that instant either double swap of lowest element or min element at that instant.
        summate all the values until array become empty(i.e both baskets will be identical)
        
Time complexity: O(nlogn)
Space complexity: O(n)
"""
class Solution:
    def minCost(self, basket1: List[int], basket2: List[int]) -> int:
        set1=set(basket1)
        set2=set(basket2)
        hash={}
        arr_b1=[]
        arr_b2=[]
        basket1.sort()
        basket2.sort()
        if basket1==basket2:
            return 0
        for num in basket1:
            if num in hash:
                hash[num]+=1
            else:
                hash[num]=1
        for num in basket2:
            if num in hash:
                hash[num]-=1
            else:
                hash[num]=-1
        count=0
        key=min(min(basket1),min(basket2))
        for k,v in hash.items():
            if v%2!=0:
                return -1
            if (v%2==0 and v//2!=0):
                if v>0:
                    arr=[k]*(v//2)
                    arr_b1.extend(arr)
                else:
                    arr2=[k]*(abs(v)//2)
                    arr_b2.extend(arr2)
                count+=1
        if count==0:
            return -1
        total=0
        arr_b1.sort()
        arr_b2.sort(reverse=True)
        for i in range(len(arr_b1)):
            cost=min(arr_b1[i],arr_b2[i])
            cost1=key*2
            total+=min(cost,cost1)
        return total

