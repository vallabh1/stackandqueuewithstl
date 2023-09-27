#include "stack.cpp"
#include <iostream>
#include <vector>

int main(){
    stack<int> st1;
    st1.showstack();
    st1.push(1);
    st1.push(3);
    std::cout<<st1.top()<<std::endl;
    st1.push(9);
    st1.showstack();
    st1.pop();
    st1.pop();
    st1.showstack();
    st1.pop();
    st1.showstack();
    return 1;
}