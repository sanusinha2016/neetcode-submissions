class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = set()
        left = 0
        max_len = 0

        for right in range(len(s)):
            while s[right] in st:
                st.remove(s[left])
                left += 1
            st.add(s[right])
            max_len = max(max_len , right - left + 1)
        return max_len


        



# class Solution {
# public:
#     int lengthOfLongestSubstring(string s) {

#         unordered_set<char> st ;
#         int left = 0 ;
#         int maxLen = 0 ;

#         for(int right = 0 ; right<s.size();right++){
#             while(st.find(s[right]) != st.end()){
#                 st.erase(s[left]);
#                 left++;
#             }
#             st.insert(s[right]);
#             maxLen = max(maxLen , right - left +1);
#         }
#         return maxLen;
        
#     }
# };
