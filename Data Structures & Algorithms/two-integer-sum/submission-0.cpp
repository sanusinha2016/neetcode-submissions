class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;   // number → index

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if(seen.count(complement)) {
                return {seen[complement], i};
            }
            
            seen[nums[i]] = i;   // abhi daal do taaki aage kaam aaye
        }
        
        return {};  // question ke hisaab se yeh kabhi nahi aayega
    
    }
};
