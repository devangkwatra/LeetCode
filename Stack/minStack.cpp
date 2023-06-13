class MinStack {
private:
    stack<int> ms;
    stack<int> as;
public:    
    void push(int val) {
        ms.push(val);
        if(as.empty() or as.top() >= val)  as.push(val);
    }
    void pop() {
        if(as.top() == ms.top())  as.pop();
        ms.pop();
    }
    int top() {
        return ms.top();
    }
    int getMin() {
        return as.top();
    }
};
