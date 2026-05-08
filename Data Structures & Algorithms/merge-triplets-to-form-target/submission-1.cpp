class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {


        bool canMakeX = false;
        bool canMakeY = false;
        bool canMakeZ = false;

        for(auto& t : triplets){

            if(t[0] >target[0] || t[1]>target[1] || t[2]>target[2]){

                continue ;
            }
            if(t[0] == target[0])canMakeX = true;
            if(t[1] == target[1])canMakeY = true;
            if(t[2] == target[2])canMakeZ = true;

        }
        return canMakeX && canMakeY && canMakeZ ;
    }
};
