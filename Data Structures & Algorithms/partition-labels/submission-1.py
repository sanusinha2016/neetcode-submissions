class Solution:
    def partitionLabels(self, s: str) -> List[int]:

        last = {}

        for i , ch in enumerate(s):
            last[ch]=i

        ans =[]
        size = 0
        end = 0

        for i , ch in enumerate(s):
            end = max(end , last[ch])
            size+=1
            if i == end:
                ans.append(size)
                size = 0
        
        
        return ans
        