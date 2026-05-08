class Solution {
public:
    int solve(int ind ,int prev , vector<int>& nums ){
        if(ind==nums.size()){
            return 0 ;
        }
        int notTake = solve(ind +1 , prev , nums );
        int take = 0 ;
        if(prev == -1 || nums[ind]>nums[prev]){
            take = 1 + solve(ind+1 , ind , nums);
        }   

        return max(take , notTake);


    }
    int lengthOfLIS(vector<int>& nums) {
 
        return solve( 0 , -1 , nums  );
        
    }
};
