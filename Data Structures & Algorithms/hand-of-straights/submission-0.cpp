class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        int n = hand.size();
        if(n%groupSize != 0 ){
            return false ;
        }
        map<int,int> freq ;
        for(int card : hand){
            freq[card]++;
        }
        while(!freq.empty()){
            int start = freq.begin()->first;
            for(int i =0 ; i<groupSize ; i++){
                int current = start + i ;
                if(freq[current] == 0 ){
                    return false ;
                }
                freq[current]--;
                if (freq[current] == 0){
                    freq.erase(current);
                }
            }
        }
        return true ;
    }
};
