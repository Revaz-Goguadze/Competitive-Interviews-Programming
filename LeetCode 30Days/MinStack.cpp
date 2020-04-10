#include<bits/stdc++.h>
class MinStack {
    vector<int> min;
    vector<int> stack;
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        stack.emplace_back(x);
        if(min.empty()  || min.back() >= x){
            min.emplace_back(x);
        }
    }
    
    void pop() {
        if(stack.back() == min.back()){
            stack.pop_back();
        }
        stack.pop_back();
    }
    
    int top() {
       if(!stack.empty()){
           return stack.back();
       }
       return -1;
    }
    
    int getMin() {
        if(!min.empty()){
            return min.back();
        }
        return -1;
    }
};
