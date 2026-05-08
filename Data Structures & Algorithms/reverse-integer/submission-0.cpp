class Solution {
public:
    int reverse(int x) {
        long rev = 0;   // temporarily long में रखो
        
        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        // अब चेक करो range में है या नहीं
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
        
        return (int)rev;
    }
};