class Solution {
public:

    int solve(int i ,vector<int>& nums ,vector<int>& dp){
        int n = nums.size();
        if (i>=n){
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
    

        int first =nums[i] + solve(i+1, nums ,dp);
        int second = nums[i] + solve(i+2, nums,dp );

        return dp[i] = min(first,second);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(
            solve(0, cost ,dp),
            solve(1, cost,dp)
        );        
    }
};
