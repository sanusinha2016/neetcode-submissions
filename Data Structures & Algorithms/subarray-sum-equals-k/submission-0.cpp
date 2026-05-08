class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mp ; 
        mp[0]=1 ;
        int count = 0 ;
        int curr_sum = 0 ;

        for(int num : nums){
            curr_sum += num ;

            if(mp.count(curr_sum - k )){
                count+=mp[curr_sum - k ];
            }
            mp[curr_sum]++;
        }
        return count ;

    }
};