class MedianFinder {
public:
    priority_queue<int> maxH;                             // max-heap (left / smaller half)
    priority_queue<int, vector<int>, greater<int>> minH;  // min-heap (right / larger half)

    MedianFinder() {}

    void addNum(int num) {
        maxH.push(num);

        // Ensure partition property: everything in maxH <= everything in minH
        if (!minH.empty() && maxH.top() > minH.top()) {
            minH.push(maxH.top());
            maxH.pop();
        }

        // Rebalance sizes: maxH can be == minH or minH + 1
        if (maxH.size() > minH.size() + 1) {
            minH.push(maxH.top());
            maxH.pop();
        }
        // ← THIS WAS MISSING: fix when min-heap becomes larger
        else if (minH.size() > maxH.size()) {
            maxH.push(minH.top());
            minH.pop();
        }
    }
    
    double findMedian() {
        if (maxH.size() > minH.size()) {
            return maxH.top();
        }
        return (maxH.top() + minH.top()) / 2.0;
    }
};