class MinStack {
public:
    stack<pair<int,int>>st;
   // int mini= INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
       int mini = st.empty()?val: min(val, st.top().second);
        st.push({val, mini});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        auto[val, mini] = st.top();
        return val;
    }
    
    int getMin() {
        auto[val, mini] = st.top();
        return mini;
    }
};
