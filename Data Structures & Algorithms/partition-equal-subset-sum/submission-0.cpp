class Solution {
public:
    bool solve(int ind , vector<int>& nums , int target){
        if(target == 0){
            return true ;
        }
        if(ind == 0)return (nums[0]==target);
        bool notTake = solve(ind-1 , nums , target);
        bool take = false ;
        if(nums[ind] <=target){
            take = solve(ind-1 ,nums ,  target - nums[ind] );

        }
        return take | notTake ;

    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            totalSum+=nums[i];
        }
        int target = totalSum/2 ;
        if(totalSum %2 ){
            return false ;
        }
        return solve( n-1 ,nums , target );
        
    }
};
