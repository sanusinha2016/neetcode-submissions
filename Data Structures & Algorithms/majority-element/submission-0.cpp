class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        while(true){
            int cand = nums[rand() % n];
            int count = 0 ;
            for(int num : nums){
                if(num ==cand){
                    count++;
                }
            }
            if(count>n/2){
                return cand;
            }
        }
        
    }
};