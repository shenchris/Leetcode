class MyStack {
public:
    queue<int> stack;

    MyStack() {

    }

    void push(int x) {
        stack.push(x);
    }

    int pop() {
        for (int i = 0; i < stack.size()-1; ++i) {
            int tem=stack.front();
            stack.pop();
            stack.push(tem);
        }
        int tem=stack.front();
        stack.pop();
        return tem;
        
    }

    int top() {
        return stack.back();
    }

    bool empty() {
        return stack.size()==0;
    }
};

