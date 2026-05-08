class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:

        left = max(weights)
        right = sum(weights)

        while left < right :
            mid = (left + right)//2
            current_load = 0
            required_days = 1

            for w in weights :
                if current_load + w > mid :
                    required_days +=1
                    current_load = w
                    if required_days>days:
                        break 
                else:
                    current_load += w
            if required_days <= days:
                right = mid 
            else :
                left = mid+1
         
        return left

                    

            
