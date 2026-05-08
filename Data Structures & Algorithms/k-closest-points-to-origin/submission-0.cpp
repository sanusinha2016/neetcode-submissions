class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<long long , int>> maxHeap ;
        for(int i = 0 ; i < points.size() ; ++i){
            long long dist = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            maxHeap.push({dist,i});
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }

        vector<vector<int>> result ;
        while(!maxHeap.empty()){
            int idx = maxHeap.top().second;
            maxHeap.pop();
            result.push_back(points[idx]);

        }
        return result;
        
    }
};
