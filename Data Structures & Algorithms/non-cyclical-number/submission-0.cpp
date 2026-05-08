class Solution {
public:


    bool isHappy(int n) {

        // int slow = n ;
        // int fast = n ;

        // do{
        //     slow = getSumOfSquares(n);
        //     fast = getSumOfSquares(getSumOfSquares(n));
        //     if(fast ==1){
        //         return true ;
        //     }
        // }while(slow != fast);

        // return false ;

        unordered_set<int> seen;
        while(n != 1 && seen.find(n) == seen.end()){
            seen.insert(n);
            n = getSumOfSquares(n);
        }
        return n ==1 ;
    }

    int getSumOfSquares(int num){

        int sum = 0 ;
        while(num > 0 ){
            int digit = num % 10 ;
            sum += digit * digit ;
            num /=10 ;
        }
        return sum ;
    }
};
