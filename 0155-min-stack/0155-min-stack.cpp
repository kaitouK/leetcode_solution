class MinStack {
public:
    stack<int> Full, Min;
    MinStack() {}

    void push(int value) {
        Full.push(value);
        if (Min.empty() || value <= Min.top())
            Min.push(value);
    }

    void pop() {
        if (Full.empty())
            return;
        if (Min.top() == Full.top())
            Min.pop();
        Full.pop();
    }

    int top() { return Full.top(); }

    int getMin() { return Min.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */