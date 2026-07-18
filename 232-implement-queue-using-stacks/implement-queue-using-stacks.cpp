class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> st;
    stack<int> st2;
    void push(int x) {

        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
       st.push(x);

        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }

    }
    
    int pop() {
        if(st2.empty()){
            return 0;
        }
        int a = st2.top();
        st2.pop();
        return a;
    }
    
    int peek() {
        if(!st2.empty()){
            return st2.top();
        }
        return 0;
    }
    
    bool empty() {
        return st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */