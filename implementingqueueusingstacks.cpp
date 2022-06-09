class MyQueue {
public:
     stack <int> stk ;
    stack <int> stk2 ;
    MyQueue() {
        
    }
    
    void push(int x) {
       while(!stk.empty())
       {
           stk2.push(stk.top());
           stk.pop();
       }
        
        stk.push(x);
         while(!stk2.empty())
       {
           stk.push(stk2.top());
           stk2.pop();
       }
        
        
    }
    
    int pop() {
      int c= stk.top();
        stk.pop();
        return c;
      
    }
    
    int peek() {
        return stk.top();
    }
    
    bool empty() {
        return stk.empty();
    }
};