class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.size() < t.size()) return "";
        
        int count[128] = {0};           // frequency needed from t
        for (char c : t) {
            count[c]++;
        }
        
        int required = t.size();        // total characters we still need
        int left = 0, minStart = 0, minLen = INT_MAX;
        
        for (int right = 0; right < s.size(); ++right) {
            char c = s[right];
            
            if (count[c] > 0) {
                required--;
            }
            count[c]--;                     // use one occurrence
            
            // Try to shrink from left
            while (required == 0) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minStart = left;
                }
                
                char leftChar = s[left];
                count[leftChar]++;
                
                if (count[leftChar] > 0) {
                    required++;             // we now need this character again
                }
                left++;
            }
        }
        
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};