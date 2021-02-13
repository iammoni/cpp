class MinStack {
public:
    stack<int> s;
    stack<int> temp;
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        if(temp.empty()){
            temp.push(x);
        }else{
            if(temp.top()<x){
                temp.push(temp.top());
            }else{
                temp.push(x);
            }
        }
    }
    
    void pop() {
        if(s.empty()) return;
        else{
            s.pop();
            temp.pop();
        }
        
    }
    
    int top() {
        if(s.empty()) return -1;
        return s.top();
    }
    
    int getMin() {
        if(temp.empty()) return -1;
        return temp.top();
    }
};