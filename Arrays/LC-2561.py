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

