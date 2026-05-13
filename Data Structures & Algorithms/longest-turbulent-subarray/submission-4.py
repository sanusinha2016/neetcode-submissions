class Solution:
    def maxTurbulenceSize(self, arr: List[int]) -> int:
        n = len(arr)
        left = 0
        ans = 1
        if n==1:
            return 1

        for i in range(1,n):
            c = (arr[i-1]>arr[i]) - (arr[i-1]<arr[i])
            if c == 0:
                left = i 
            elif i == n-1 or c*((arr[i]>arr[i+1])-(arr[i]<arr[i+1])) != -1:
                ans = max(ans ,  i - left + 1)
                left = i
        return ans
        