class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string &s : strs){
            res += to_string(s.length()) + "#"+s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0 ;
        int n = s.length();

        while(i<n){
            int j = i ;
            while(j < n && s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            string curr = s.substr(j + 1, len);
            ans.push_back(curr);
            i = j + 1 + len;
        }
        return ans ;

    }
};
