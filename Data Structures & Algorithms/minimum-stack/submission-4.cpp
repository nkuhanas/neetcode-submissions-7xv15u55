#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:

    vector<int> v1;
    vector<int> v2;

public:
    MinStack() {

    }
    
    void push(int val) {
        v1.push_back(val);
        v2.push_back((v2.empty() ? val : min(v2.back(), val)));
    }
    
    void pop() {
        v1.pop_back();
        v2.pop_back();
    }
    
    int top() {
        return v1.back();
    }
    
    int getMin() {
        return v2.back();
    }
};
