class Solution {
public:

    void backtrack(const vector<int>& c, int remain, int start,vector<int>& curr, vector<vector<int>>& res) {
        if(remain == 0){
            res.push_back(curr);
            return;
        }
        if (remain < 0) return;
        for(int i = start ; i<c.size();i++){
            if(c[i]>remain){
                break;
            }
            curr.push_back(c[i]);
            backtrack(c, remain - c[i], i, curr, res);  
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> current;
        
        sort(nums.begin(), nums.end());  
        
        backtrack(nums, target, 0, current, result);
        return result;
    }
};
