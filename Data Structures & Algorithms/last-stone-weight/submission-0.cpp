class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> pq;

        for(int stone : stones){
            pq.push(stone);
        }
        int x = 0 , y = 0;
        while(!pq.empty()){
            x= pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();

            if(x < y ){
                y = y-x;
                pq.push(y);
            }
            else{
                x = x -y;
                pq.push(x);
            }

        }
        return pq.top();
    }
};
