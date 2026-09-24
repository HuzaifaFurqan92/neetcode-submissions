class MinStack {
        stack<int> stk;
        stack<int> minStack;
public:
    MinStack() { }
    
    void push(int val) {
       stk.push(val);
       if(!minStack.empty())
       val = min(val,minStack.top());
       minStack.push(val); 
        return;
    }
    
    void pop() {
        stk.pop();
        minStack.pop();

    }
    
    int top() {
       return stk.top();
    }
    
    int getMin() {
       if(minStack.empty()) {cout << "Error! The Stack is empty"; return -1;}
       return minStack.top();
    
    }
};
