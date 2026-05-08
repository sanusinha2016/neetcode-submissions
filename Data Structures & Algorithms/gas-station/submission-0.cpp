class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {


        int n = gas.size();
        int total_surplus = 0 ;
        int current_surplus = 0 ;
        int start = 0 ;

        for(int i = 0 ; i < n ; i++){
            int profit = gas[i] - cost[i];
            total_surplus += profit ;
            current_surplus += profit ;

            if(current_surplus<0){
                start = i+1 ;
                current_surplus = 0 ;
            }
        }
        if(total_surplus >= 0 ){
            return start ;
        }        
        return -1 ;
    }
};
