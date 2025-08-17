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
