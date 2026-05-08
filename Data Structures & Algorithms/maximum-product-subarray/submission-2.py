class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        if not nums:
            return 0
    
        n = len(nums)
        max_product = nums[0]          # kam se kam ek element to hoga
    
        # har starting index ke liye
        for i in range(n):
            current_product = 1
        
            # i se lekar har ending index tak
            for j in range(i, n):
                current_product *= nums[j]
                max_product = max(max_product, current_product)
    
        return max_product