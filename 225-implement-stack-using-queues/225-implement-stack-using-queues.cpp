class MyStack {
public:
    queue<int> que;
    MyStack() {
        
    }
    
    void push(int x) {
        que.push(x);
        for(int i=0;i<que.size()-1;i++)
        {
            que.push(que.front());
            que.pop();
        }
    }
    
    int pop() {
        int f=que.front();
        que.pop();
        return f;
    }
    
    int top() {
        return que.front();
    }
    
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
  queue<int> q;
public:
    void push(int x) {
        q.push(x);
        for (int i=1; i<q.size(); i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        q.pop();
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
 */
