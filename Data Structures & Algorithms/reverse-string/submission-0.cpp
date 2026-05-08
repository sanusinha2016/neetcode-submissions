class Solution {
public:
    void reverseString(vector<char>& s) {


        int l = 0 ; 
        int r = s.size()-1;
        char a , b ;

        while(l<r){
            a = s[l];
            b = s[r];

            s[l] = b;
            s[r] = a;

            l++;
            r--;

        }
        
        
    }
};