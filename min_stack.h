class MinStack {
   stack<int> data;
   stack<int> min;
public:

    void push(int x) {
        data.push(x);
        if(min.size() == 0||x<=min.top()){
            min.push(x);
        }
        
        
    }

    void pop() {
       if(data.top()==min.top())
           min.pop();
           data.pop();
        
    }

    int top() {
        return data.top();
      
    }

    int getMin() {
        return min.top();
        
    }
};
