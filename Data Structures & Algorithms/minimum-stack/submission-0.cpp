class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
        
    }
    
    void pop() {
        if(!st.empty()){
            int topVal = st.top();
            st.pop();
            if(topVal == minSt.top()){
                minSt.pop();
            }
        }
        
    }
    
    int top() {
        return st.top();

    }
    
    int getMin() {
        return minSt.top();
    }
};
