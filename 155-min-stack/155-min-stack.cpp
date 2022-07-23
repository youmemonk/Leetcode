class MinStack {
private:
    stack<int> a;
    stack<int> b;
public:
    MinStack() {}
    
    void push(int val) {
        if(a.empty()){
            a.push(val);
            b.push(val);
        }
        else{
            a.push(val);
            b.push(min(a.top(), b.top()));
        }
    }
    
    void pop() {
        a.pop();
        b.pop();
    }
    
    int top() {
        return a.top();
    }
    
    int getMin() {
        return b.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */