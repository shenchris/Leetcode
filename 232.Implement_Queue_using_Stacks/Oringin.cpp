class MyQueue {
public:
    stack<int> stIn;
    stack<int> stOut;

    MyQueue() {

    }

    void push(int x) {
        while (!stOut.empty()){
            stIn.push(stOut.top());
            stOut.pop();
        }
        stIn.push(x);
    }

    int pop() {
        while (!stIn.empty()){
            stOut.push(stIn.top());
            stIn.pop();
        }
        int tmp=stOut.top();
        stOut.pop();
        return tmp;
    }

    int peek() {
        while (!stIn.empty()){
            stOut.push(stIn.top());
            stIn.pop();
        }
        return stOut.top();
    }

    bool empty() {
        return stIn.size()==0 and stOut.size()==0;
    }
};
