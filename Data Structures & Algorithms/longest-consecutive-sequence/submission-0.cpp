class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_set<int> s(nums.begin(),nums.end());
        int maxLen = 0;

        for(int num : s){
            if(s.find(num-1) == s.end()){
                int len = 1 ;
                int next = num + 1 ;

                while(s.find(next) != s.end()){
                    len++ ;
                    next++ ;
                }
                maxLen = max(maxLen , len);
            }
        }

        return maxLen;

    }
};
