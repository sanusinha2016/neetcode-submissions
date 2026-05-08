class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum = 0 ;
        for(int i = 0 ; i< n ;i++){
            sum+=nums[i];
        }
        int sum_t = n* (n+1)/2;

        if(sum == sum_t){
            return 0 ;
        }
        return sum_t -sum;
        
    }
};
