class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int glob = nums[0];
        int curr = nums[0];

        for(int i = 1 ; i< nums.size();i++){
            
            curr = max(nums[i] , nums[i] + curr);
            glob = max(glob , curr); 
        }

        return glob ;

    }
};
