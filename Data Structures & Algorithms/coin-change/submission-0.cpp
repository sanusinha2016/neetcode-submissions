class Solution {
public:
    int solve(int ind , int amount , vector<int>& coins){
        if(ind == 0){
            if(amount%coins[0] == 0)return amount/coins[0];
            return 1e9;
        }
        int notTake = 0 + solve(ind -1 , amount , coins);
        int take = INT_MAX;

        if(coins[ind] <= amount){
            take = 1+ solve(ind , amount-coins[ind] , coins);
        }
     
        return min(take , notTake);

    }


    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();

        int ans = solve(n-1 , amount , coins);
        if(ans >= 1e9)return -1;
        return ans ;

        
    }
};
