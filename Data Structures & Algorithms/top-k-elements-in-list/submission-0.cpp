class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> v(nums.size()+1);
        unordered_map<int , int> mp ;
        for (int num : nums){
            mp[num]++;

        }
        for(auto m : mp){
                //   bucket[it.second].push_back(it.first);
                v[m.second].push_back(m.first);

        }
        vector<int>ans;
        for (int i = nums.size(); i >= 0 && ans.size() < k; i--) {
            for (int num : v[i]) {
                ans.push_back(num);
                if (ans.size() == k)
                    break;
            }
        }
        return ans;
        
    }
};
