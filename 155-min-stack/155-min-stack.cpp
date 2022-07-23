class Node {
public:
    int val;
    int minVal;
    Node* next;
    
    Node(int val, int minVal){
        this->val = val;
        this->minVal = minVal;
        next = NULL;
    }
};

Node* head;

class MinStack {
public:
    MinStack() {
        head = NULL;
    }
    
    void push(int val) {
        if(head == NULL){
            head = new Node(val, val);
        }
        else{
            Node* newHead = new Node(val, min(val, head->minVal));
            newHead->next = head;
            head = newHead;
        }
    }
    
    void pop() {
        head = head->next;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->minVal;
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