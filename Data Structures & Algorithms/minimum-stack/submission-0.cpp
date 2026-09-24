class MinStack {
    int Size = 100;
    int arr[100];
    int topidx ;
public:
    MinStack() {
        topidx = -1;
        
    }
    
    void push(int val) {
        if (topidx == Size - 1) {cout << "Error.The Stack is full"; return;}
        topidx++;
        arr[topidx] = val;
        return;
    }
    
    void pop() {
        if(topidx == -1) {cout << "Stack is empty"; return;}
        topidx --;

    }
    
    int top() {
        if(topidx == -1) {cout << "Stack is empty"; return -1;}
        return arr[topidx];
    }
    
    int getMin() {
       if(topidx == -1) {cout << "Error! The Stack is empty"; return -1;}
       int min_num = arr[0];
        for(int i =0 ; i <= topidx; i++){
          min_num = min(min_num,arr[i]);
        }
return min_num;
    }
};
