class MyStack {
public:
    queue<int> queue1;
    queue<int> queue2;

    MyStack() {
        
    }
    
    void push(int x) {
        queue1.push(x);
    }
    
    int pop() {
        int size = queue1.size() - 1;
        while(size--){
            queue2.push(queue1.front());
            queue1.pop();
        }

        int result = queue1.front();
        queue1.pop();
        queue1 = queue2;
        while(!queue2.empty()){
            queue2.pop();
        }
        return result;
    }
    
    int top() {
        int size = queue1.size() - 1;
        while(size--){
            queue2.push(queue1.front());
            queue1.pop();
        }
        int result = queue1.front();
        queue2.push(queue1.front());
        queue1.pop();

        queue1 = queue2;
        while(!queue2.empty()){
            queue2.pop();
        }
        return result;

    }
    
    bool empty() {
        return queue1.empty();
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
