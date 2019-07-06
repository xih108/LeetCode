class MinStack {
public:
    /** initialize your data structure here. */
    int min;
    int topv;
    queue<int> que;
    
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int x) {
        if (x<min){
            min = x;
        }
        topv = x;
        que.push(x);
    }
    
    void pop() {
        min = INT_MAX;
        for (int i = 0; i < que.size()-1; i++){
            topv = que.front();
            que.pop();
            que.push(topv);
            if (topv < min){
                min = topv;
            }
           
        }
        que.pop();
    }
    
    int top() {
        return topv;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
