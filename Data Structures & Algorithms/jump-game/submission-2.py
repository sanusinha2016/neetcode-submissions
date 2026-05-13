class Solution:
    def canJump(self, nums: List[int]) -> bool:

        farthest = 0

        for i in range(len(nums)):
            if i>farthest:
                return False
            
            print(farthest , i+nums[i])
            farthest = max(farthest , i+nums[i])
          
        
        return True

        