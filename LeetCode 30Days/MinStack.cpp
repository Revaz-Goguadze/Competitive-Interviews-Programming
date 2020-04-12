#include<bits/stdc++.h>
class MinStack {
    vector<int> minV;
    vector<int> s;
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        s.emplace_back(x);
        if(minV.empty()  || x < minV.back()){
            minV.emplace_back(x);
        }
    }
    
    void pop() {
        if(s.back() == minV.back()){
            s.pop_back();
        }
        s.pop_back();
    }
    
    int top() {
       return !s.empty() ? s.back():-1;
    }
    
    int getmin() {
        return !minV.empty() ? minV.back():-1;
    }
};
