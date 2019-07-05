class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> que;
    int topv;
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        topv=x;
        que.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
    
        for (int i = 0; i < que.size()-1; i++){
            topv = que.front();
            que.pop();
            que.push(topv);
        }
        
        int front = que.front();
        que.pop();
        return front;
    }
    
    /** Get the top element. */
    int top() {
      
        return topv;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
