class Solution:
    def maxProduct(self, nums: List[int]) -> int:

        res = nums[0]
        curMin , curMax = nums[0] , nums[0]

        for n in nums[1:]:
            temp = curMax;
            curMax = max(n , temp*n , curMin*n)
            curMin = min(n , temp*n , curMin*n)
            res = max(res,curMax)
        
        return res

        