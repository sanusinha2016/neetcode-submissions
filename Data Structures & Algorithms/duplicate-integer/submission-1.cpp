class Solution {
public:
    // bool hasDuplicate(vector<int>& nums) {
    //     unordered_map<int,int> mp ;

    //     for(int num : nums){
    //         mp[num]++;
    //         if(mp[num]>1){
    //             return true;
    //         }
    //     }
    //     return false;

        
        
    // }

    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int x : nums) {
            if (st.count(x)) {
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};